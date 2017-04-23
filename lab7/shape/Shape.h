//
// Created by piotr on 23.04.17.
//

#ifndef JIMP_EXERCISES_SHAPE_H
#define JIMP_EXERCISES_SHAPE_H

#include <iostream>

class Ksztalt
{
public:
    virtual void rysuj();
};


class Trojkat : public Ksztalt
{
public:

    virtual void rysuj()
    {
        std::cout << "   *   " << std::endl;
        std::cout << "  * *  " << std::endl;
        std::cout << " *   * " << std::endl;
        std::cout << "*******" << std::endl;
    }

};


class Kwadrat : public Ksztalt
{
public:
    virtual void rysuj()
    {
        std::cout << "*****" << std::endl;
        std::cout << "*   *" << std::endl;
        std::cout << "*   *" << std::endl;
        std::cout << "*   *" << std::endl;
        std::cout << "*****" << std::endl;

    }
};

class Kolo : public Ksztalt
{
public:
    virtual void rysuj()
    {
        std::cout << "   **   " << std::endl;
        std::cout << " *    * " << std::endl;
        std::cout << "*      *" << std::endl;
        std::cout << "*      *" << std::endl;
        std::cout << " *    * " << std::endl;
        std::cout << "   **   " << std::endl;

    }
};

#endif //JIMP_EXERCISES_SHAPE_H
