#include <cmath>
#include <ostream>
#include <iostream>

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;
using ::std::cout;

class Point {
public:
    //Konstruktor bezparametrowy
    Point();
    //Konstruktor parametrowy
    Point(double x, double y);
    //Destruktor wykonywany przed zwolnieniem pamięci
    ~Point();

    //Metody nie modyfikujące stanu obiektu (const na końcu metody)
    //nie mogą zmodyfikować tego obiektu.
    void ToString(ostream *out) const;
    double Distance(const Point &other) const;


    //metody akcesorów są publiczne i tylko w przy ich pomocy
    //można się dostać z zewnątrz do pól klasy
    double GetX() const { return x_; }
    double GetY() const { return y_; }

    //metody seterów pozwalające zmienić stan obiektu
    //po jego zainicjalizowaniu
    void SetX(double x) { x_ = x; }
    void SetY(double y) { y_ = y; }
private:
    //w przeciwienstwie do pythona C++ wymaga jawnej deklaracji składowych pól klasy:
    double x_, y_;
};


class Point3D : public Point
{
public:
    Point3D();
    Point3D(double x, double y, double z);

    ~Point3D();

    double distance(const Point3D &other);
    double GetZ() const { return z_; }

private:
    double z_;
};


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
    cout << "Konstruktor parametrowy Point3D";
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


int main()
{
    Point3D *a = new Point3D();
    Point3D *b = new Point3D(1, 2, 3);

    cout << b->distance(*a) << endl;

    delete a;
    delete b;

    return 0;
}
