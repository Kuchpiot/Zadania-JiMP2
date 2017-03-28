//
// Created by piotr on 21.03.17.
//

#ifndef JIMP_EXERCISES_NAME_H
#define JIMP_EXERCISES_NAME_H

#include <string>
#include <vector>

class Name
{
public:
    Name(std::string input);

    std::string FirstName();
    std::string SecondName();
    std::string ThirdName();
    std::string Surname();
    std::string ToFullInitials();
    std::string ToFirstNamesInitials();
    std::string ToSurnameNames();
    std::string ToNamesSurname();
    bool IsBeforeBySurname(std::string x);
    bool IsBeforeByFirstName(std::string x);

private:
    std::vector <std::string> names_;
};

#endif //JIMP_EXERCISES_NAME_H
