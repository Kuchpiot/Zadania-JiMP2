//
// Created by piotr on 25.04.17.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <iostream>
#include "Exceptions.h"

class Student
{
public:
    Student(std::string name, std::string surname, int age, std::string program);

    static void CheckFirstLetter(std::string name);
    static void CheckCharacters(std::string name);
    static void CheckAge(int age);
    static void CheckProgram(std::string program);

private:

    // Fields
    std::string name_;
    std::string surname_;
    int age_;
    std::string program_;
};

#endif //JIMP_EXERCISES_STUDENT_H
