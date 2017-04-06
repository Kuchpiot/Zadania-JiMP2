//
// Created by zabldomi on 04.04.17.
//

#include "StudentRepository.h"

using ::std::istream;
using ::std::ws;

StudyYear::StudyYear(int y)
{
    this->y = y;
}

StudyYear::~StudyYear()
{

}

Student::Student(string ID, string first_n, string last_n, string p, StudyYear Year)
{
    id = ID;
    first_name = first_n;
    last_name = last_n;
    program = p;
    year = StudyYear(Year);
}

Student::~Student()
{

}

StudyYear& StudyYear::operator++()
{
    y++;
}

StudyYear& StudyYear::operator--()
{
    y--;
}

void CheckNextChar(char c, istream* is)
{
    int next_char = is->peek();
    if (next_char != c)
    {
        throw runtime_error ("Invalid character");
    }
    is->ignore();
}

void IgnoreWhitespace(istream* is) {
    (*is) >> ws;
}

string Read(istream* is) {
    string d;
    (*is) >> d;
    return d;
}

istream& operator>>(istream & input, & p)
{
    CheckNextChar(':', &input);

}