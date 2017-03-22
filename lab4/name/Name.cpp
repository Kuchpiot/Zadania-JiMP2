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

}

std::string Name::SecondName()
{

}

std::string Name::ThirdName()
{

}

std::string Name::Surname()
{

}

std::string Name::ToFullInitials()
{

}

std::string Name::ToFirstNamesInitials()
{

}

std::string Name::ToSurnameNames()
{

}

std::string Name::ToNamesSurname()
{

}

bool Name::IsBeforeBySurname()
{

}

bool Name::IsBeforeByFirstName()
{

}