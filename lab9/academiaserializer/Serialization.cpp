//
// Created by piotr on 09.05.17.
//

#include <ostream>
#include <functional>
#include "Serialization.h"

academia::Room::Room(int id_, const std::string &name_, academia::Room::Type type_) : id_(id_), name_(name_),
                                                                                      type_(type_)
{}

void academia::Room::Serialize(academia::Serializer *ser) const
{
    ser->Header("room");
    ser->IntegerField("id", id_);
    ser->StringField("name", name_);
    ser->StringField("type", TypeToString(type_));
    ser->Footer("room");
}

std::string academia::Room::TypeToString(academia::Room::Type type) const
{
    switch (type)
    {
        case Room::Type::CLASSROOM:
            return "CLASSROOM";
        case Room::Type::COMPUTER_LAB:
            return "COMPUTER_LAB";
        case Room::Type::LECTURE_HALL:
            return "LECTURE_HALL";
    }
}

void academia::XmlSerializer::IntegerField(const std::string &field_name, int value)
{
    *outstr << "<" << field_name << ">" << value << "<\\" << field_name << ">";
}

void academia::XmlSerializer::DoubleField(const std::string &field_name, double value)
{
    *outstr << "<" << field_name << ">" << value << "<\\" << field_name << ">";
}

void academia::XmlSerializer::StringField(const std::string &field_name, const std::string &value)
{
    *outstr << "<" << field_name << ">" << value << "<\\" << field_name << ">";
}

void academia::XmlSerializer::BooleanField(const std::string &field_name, bool value)
{
    *outstr << "<" << field_name << ">" << value << "<\\" << field_name << ">";
}

void academia::XmlSerializer::SerializableField(const std::string &field_name, const academia::Serializable &value)
{

}

void academia::XmlSerializer::ArrayField(const std::string &field_name,
                                         const std::vector<std::reference_wrapper<const academia::Serializable>> &value)
{
    *outstr << "<" << field_name << ">";

    for (int i = 0; i < value.size(); ++i)
    {
        value[i].get().Serialize(this);
    }

    *outstr << "<\\" << field_name << ">";
}

void academia::XmlSerializer::Header(const std::string &object_name)
{
    *outstr << "<" << object_name << ">";
}

void academia::XmlSerializer::Footer(const std::string &object_name)
{
    *outstr << "<\\" << object_name << ">";
}

void academia::JsonSerializer::IntegerField(const std::string &field_name, int value)
{
    if(wasHeaderCalled >= 2)
        *outstr << ",";

    wasHeaderCalled++;

    *outstr << "\"" << field_name << "\": " << value;
}

void academia::JsonSerializer::DoubleField(const std::string &field_name, double value)
{
    if(wasHeaderCalled >= 2)
        *outstr << ",";

    wasHeaderCalled++;

    *outstr << "\"" << field_name << "\": " << value;
}

void academia::JsonSerializer::StringField(const std::string &field_name, const std::string &value)
{
    if(wasHeaderCalled >= 2)
        *outstr << ",";

    wasHeaderCalled++;

    *outstr << " \"" << field_name << "\": \"" << value << "\"";
}

void academia::JsonSerializer::BooleanField(const std::string &field_name, bool value)
{
    if(wasHeaderCalled >= 2)
        *outstr << ",";

    wasHeaderCalled++;

    if (value)
    {
        *outstr << "\"" << field_name << "\":true";
    }
    else
    {
        *outstr << "\"" << field_name << "\":false";
    }
}

void academia::JsonSerializer::SerializableField(const std::string &field_name, const academia::Serializable &value)
{

}

void academia::JsonSerializer::ArrayField(const std::string &field_name,
                                          const std::vector<std::reference_wrapper<const academia::Serializable>> &value)
{
    if(wasHeaderCalled >= 2)
        *outstr << ",";

    wasHeaderCalled++;

    *outstr << " \"rooms\": ";

    *outstr << "[";
    for (unsigned long i = 0; i < value.size(); i++)
    {
        wasHeaderCalled = 0;

        if(i > 0)
        {
            *outstr << ", ";
        }

        value.at(i).get().Serialize(this);
    }

    *outstr << "]";
}

void academia::JsonSerializer::Header(const std::string &object_name)
{
    *outstr << "{";
    wasHeaderCalled++;
}

void academia::JsonSerializer::Footer(const std::string &object_name)
{
    *outstr << "}";
}

void academia::Building::Serialize(academia::Serializer *ser) const
{
    ser->Header("building");
    ser->IntegerField("id", id_);
    ser->StringField("name", name_);
    ser->ArrayField("rooms", type_);
    ser->Footer("building");
}

academia::Building::Building(int id_, const std::string &name_, std::vector <std::reference_wrapper<const academia::Serializable>> type_) :
        id_(id_), name_(name_), type_(type_)
{}
