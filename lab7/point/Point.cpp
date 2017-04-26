//
// Created by piotr on 27.04.17.
//

#include <cmath>
#include <ostream>
#include "Point.h"
#include <iostream>

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;
using ::std::cout;

/* Aby wskazać, ze definicja funkcji dotyczy metody danej klasy
  stosujemy tzw. operator zasięgu - "::"
*/

//Specjalna inicjalizacja zmiennych. Zmienne są inicjowane
//nim zostanie wywołane ciało konstruktora
Point::Point():x_(0),y_(0){
    cout << "Konstruktor bezparametrowy Point" << endl;
}

Point::Point(double x, double y){
    cout << "Konstruktor parametrowy Point" << endl;
    x_ = x;
    y_ = y;
}

Point::~Point(){
    cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci! Point";
    cout << endl;
}

double Point::Distance(const Point &other) const{
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
}

void Point::ToString(ostream *out) const{
    (*out) << "(" << GetX() << ";" << GetY() << ")";
}


Point3D::Point3D() : Point()
{
    cout << "Konstruktor bezparametrowy Point3D" << endl;
    z_ = 0;
}

Point3D::Point3D(double x, double y, double z) : Point(x, y)
{
    cout << "Konstruktor parametrowy Point3D" << endl;
    z_ = z;
}

Point3D::~Point3D()
{
    cout << "Zwalniam pamięć Point3D" << endl;
}

double Point3D::distance(const Point3D &other)
{
    return sqrt(pow(GetX() - other.GetX(), 2) + pow(GetY() - other.GetY(), 2) + pow(GetZ() - other.GetZ(), 2));
}