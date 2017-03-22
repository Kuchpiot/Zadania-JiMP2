//
// Created by piotr on 21.03.17.
//

#include "Name.h"

Name::Name(std::string input)
{
    std::istringstream iss;
    names_ {std::istream_iterator<std::string>{iss},
            std::istream_iterator<std::string>{}};
}

std::string Name::FirstName()
{
    return names_[0];
}

std::string Name::SecondName()
{
    if(names_.size() >= 3)
    {
        return names_[1];
    }
    else
    {
        return "None";
    }
}

std::string Name::ThirdName()
{
    if(names_.size() >= 4)
    {
        return names_[2];
    }
    else
    {
        return "None";
    }
}

std::string Name::Surname()
{
    return names_[names_.size() - 1];
}

std::string Name::ToFullInitials()
{
    std::string initials = "";

    for(auto s : names_)
    {
        initials.append(s[0] + ". ");
    }

    return initials;
}

std::string Name::ToFirstNamesInitials()
{
    std::string initials = "";

    for(auto s : names_)
    {
        initials.append(s[0] + ". ");
    }

    initials.append(names_[names_.size() - 1].substr(1, names_[names_.size() - 1].size()));

    return initials;
}

std::string Name::ToSurnameNames()
{
    std::string result = names_[names_.size() - 1];

    for(auto i = names_.begin(); i != names_.end(); ++i)
    {
        if(i == names_.end())
        {
            break;
        }
        result.append(" " + i);
    }

    return result;
}

std::string Name::ToNamesSurname()
{
    std::string result = "";

    for(auto s : names_)
    {
        result.append(s + " ");
    }

    return result;
}

bool Name::IsBeforeBySurname(std::string x)
{
    std::string *pointer_to_surname = names_[names_.size() - 1];

    for(int i = 0; i < pointer_to_surname->size() && i < x.size(); i++)
    {
        if(*pointer_to_surname[i] > x[i])
        {
            return false;
        }
        return true;
    }
}

bool Name::IsBeforeByFirstName(std::string x)
{
    std::string *pointer_to_surname = names_[0];

    for(int i = 0; i < pointer_to_surname->size() && i < x.size(); i++)
    {
        if(*pointer_to_surname[i] > x[i])
        {
            return false;
        }
        return true;
    }
}