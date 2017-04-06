//
// Created by zabldomi on 04.04.17.
//

#ifndef JIMP_EXERCISES_STUDENTREPOSITORY_H
#define JIMP_EXERCISES_STUDENTREPOSITORY_H

class StudyYear
{
private:

    int y;

public:

    StudyYear(int y);
    ~ StudyYear();
    StudyYear &operator++();
    StudyYear &operator--();
    istream& operator>>();
    ostream& operator<<();
    StudyYear &operator==();


};

std::istream& operator>>(std::istream &is, Student& student);

class Student
{
    string id, first_name, last_name, program;
    StudyYear year;

    Student(string ID, string first_n, string last_n, string p, StudyYear Year);
    ~ Student();
};

#endif //JIMP_EXERCISES_STUDENTREPOSITORY_H
