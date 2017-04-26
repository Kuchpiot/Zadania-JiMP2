//
// Created by piotr on 27.04.17.
//

#include "Point.h"
#include <iostream>

int main()
{
    Point3D *a = new Point3D();
    Point3D *b = new Point3D(1, 2, 3);

    std::cout << b->distance(*a) << std::endl;

    delete a;
    delete b;

    return 0;
}

// Najpierw wykonują się konstruktory klasy nadrzędnej, ponieważ jest ona wymagana do stworzenia
// klasy potomej, której konstruktor wykonuje się w dalszej kolejności. Destruktory są wywoływane
// w kolejności odwrotnej - najpierw wykonuje się destruktor klasy potomnej a potem klasy nadrzędnej