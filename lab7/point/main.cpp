//
// Created by piotr on 27.04.17.
//

#include "Point.h"
#include <iostream>

int main()
{
    Point *x = new Point();
    Point3D *a = new Point3D();
    Point3D *b = new Point3D(1, 2, 3);

    std::cout << x->Distance(*a) << std::endl;

    delete a;
    delete b;

    return 0;
}

// Zadanie 5:
// Najpierw wykonują się konstruktory klasy nadrzędnej, ponieważ jest ona wymagana do stworzenia
// klasy potomej, której konstruktor wykonuje się w dalszej kolejności. Destruktory są wywoływane
// w kolejności odwrotnej - najpierw wykonuje się destruktor klasy potomnej a potem klasy nadrzędnej

// Zadanie 6:
// Mieliśmy tutaj do czynienia ze zjawiskiem polimorfizmu - w związku z tym, że klasa Point3D dziedziczy
// po klasie Point, jest ona też obiektem klasy Point, co pozwoliło na wykonanie metody Point::Distance(...)
// gdzie Point3D został potraktowany jako obiekt Point (policzono ze współrzędnych x y)