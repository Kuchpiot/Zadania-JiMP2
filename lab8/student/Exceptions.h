//
// Created by piotr on 25.04.17.
//

#ifndef JIMP_EXERCISES_EXCEPTIONS_H
#define JIMP_EXERCISES_EXCEPTIONS_H

#include <iostream>

class InvalidNameSurname : public std::invalid_argument
{

};

class InvalidNameCharacters : public std::invalid_argument
{

};

class InvalidAge : public std::invalid_argument
{

};

class InvalidProgram : public std::invalid_argument
{

};

#endif //JIMP_EXERCISES_EXCEPTIONS_H
