//
// Created by piotr on 25.04.17.
//

#include "Student.h"

Student::Student(std::string name, std::string surname, int age, std::string program)
{
    // Check sequence
    try
    {
        CheckFirstLetter(name);
        CheckFirstLetter(surname);
        CheckCharacters(name);
        CheckCharacters(surname);
        CheckAge(age);
        CheckProgram(program);
    }
    catch(InvalidNameSurname &e)
    {
        std::cerr << "Invalid first letters of name or surname!" << std::endl;
    }
    catch (InvalidNameCharacters &e)
    {
        std::cerr << "Invalid characters of name or surname!" << std::endl;
    }
    catch (InvalidAge &e)
    {
        std::cerr << "Invalid age: age must be between 10 - 100!" << std::endl;
    }
    catch (InvalidProgram &e)
    {
        std::cerr << "Invalid program: must be one of XYZ university!" << std::endl;
    }

    // Everything is OK - assign values
    name_ = name;
    surname_ = surname;
    age_ = age;
    program_ = program;
}

void Student::CheckFirstLetter(std::string name)
{
    if(name[0] < 'A')
    {
        throw InvalidNameSurname();
    }
}

void Student::CheckCharacters(std::string name)
{
    for (auto &&characters : name)
    {
        if(characters < 'a' || characters > 'z')
        {
            throw InvalidNameCharacters();
        }
    }
}

void Student::CheckAge(int age)
{
    if (age > 100 && age < 10)
    {
        throw InvalidAge();
    }
}

void Student::CheckProgram(std::string program)
{
    if(program != "informatyka" && program != "ekonomia" &&
            program != "matematyka" && program != "fizyka" && program != "filozofia")
    {
        throw InvalidProgram();
    }
}