//
// Created by zabldomi on 21.03.17.
//

#include "Square.h"
#include <cstdlib>
#include <iostream>


Square::Square()
{
    srand(time(NULL));
    double x1 = (std::rand() % 90) + 10;
    double x2 = (std::rand() % 90) + 10;
    double y1 = (std::rand() % 90) + 10;
    double y2 = (std::rand() % 90) + 10;

    arr[0] = Point(x1, y1);
    arr[1] = Point(x1, y2);
    arr[2] = Point(x2, y1);
    arr[3] = Point(x2, y2);
}

double Square::Circumference()
{
    return 4*arr[0].Distance(arr[1]);
}

double