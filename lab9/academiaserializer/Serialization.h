

#ifndef JIMP_EXERCISES_SERIALIZATION_H
#define JIMP_EXERCISES_SERIALIZATION_H

#include <string>
#include <vector>

namespace academia
{
    class Serializer;

    class Serializable
    {
    public:
        virtual void Serialize(Serializer* ser) const = 0;
    };

    class Serializer
    {
    public:
        virtual void IntegerField(const std::string &field_name, int value) = 0;
        virtual void DoubleField(const std::string &field_name, double value) = 0;
        virtual void StringField(const std::string &field_name, const std::string &value) = 0;
        virtual void BooleanField(const std::string &field_name, bool value) = 0;

        Serializer(std::ostream* out)
        {
            this->outstr = out;
        }

        virtual void SerializableField(const std::string &field_name, const academia::Serializable &value) = 0;
        virtual void ArrayField(const std::string &field_name,
                        const std::vector<std::reference_wrapper<const academia::Serializable>> &value) = 0;
        virtual void Header(const std::string &object_name) = 0;
        virtual void Footer(const std::string &object_name) = 0;

        std::ostream *outstr;
        int wasHeaderCalled = 0;
    };

    class XmlSerializer : public Serializer
    {
    public:

        XmlSerializer(std::ostream *out) : Serializer(out) {}

        void IntegerField(const std::string &field_name, int value) override;

        void DoubleField(const std::string &field_name, double value) override;

        void StringField(const std::string &field_name, const std::string &value) override;

        void BooleanField(const std::string &field_name, bool value) override;

        void SerializableField(const std::string &field_name, const academia::Serializable &value) override;

        void ArrayField(const std::string &field_name,
                        const std::vector<std::reference_wrapper<const Serializable>> &value) override;

        void Header(const std::string &object_name) override;

        void Footer(const std::string &object_name) override;
    };

    class JsonSerializer : public Serializer
    {
    public:

        JsonSerializer(std::ostream* out) : Serializer(out) {}

        void IntegerField(const std::string &field_name, int value) override;

        void DoubleField(const std::string &field_name, double value) override;

        void StringField(const std::string &field_name, const std::string &value) override;

        void BooleanField(const std::string &field_name, bool value) override;

        void SerializableField(const std::string &field_name, const academia::Serializable &value) override;

        void ArrayField(const std::string &field_name,
                        const std::vector<std::reference_wrapper<const Serializable>> &value) override;

        void Header(const std::string &object_name) override;

        void Footer(const std::string &object_name) override;
    };

    class Room : public Serializable
    {
    public:
        void Serialize(Serializer *ser) const override;

        enum class Type
        {
            COMPUTER_LAB,
            LECTURE_HALL,
            CLASSROOM
        };

        std::string TypeToString(Type type) const;

    private:
    public:
        Room(int id_, const std::string &name_, Type type_);

    private:
        int id_;
        std::string name_;
        Type type_;
    };

    class Building : public Serializable
    {
    public:
        Building(int id_, const std::string &name_, std::vector <std::reference_wrapper<const Serializable>> type_);

        void Serialize(Serializer *ser) const override;

    private:
        int id_;
        std::string name_;
        std::vector <std::reference_wrapper<const Serializable>> type_;
    };


}


#endif //JIMP_EXERCISES_SERIALIZATION_H
