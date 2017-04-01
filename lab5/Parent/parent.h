//
// Created by zabldomi on 28.03.17.
//

#ifndef JIMP_EXERCISES_PARENT_H
#define JIMP_EXERCISES_PARENT_H

class Parent
{
private:

    std::string name;
    std::string surname;
    int age;
    Child child;

public:

    Parent();
    void PrzypiszDoInnejSzkoly(std::string nazwa);
};

class Child
{
private:

    std::string name;
    std::string surname;
    int age;
    std::string school;

    friend class Parent;
};

#endif //JIMP_EXERCISES_PARENT_H
