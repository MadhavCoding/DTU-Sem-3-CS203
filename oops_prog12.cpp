#include <iostream>
using namespace std;

class c_polygon
{
public:
    virtual void area() = 0;
};

class c_triangle : public c_polygon
{
    int base, height;

public:
    c_triangle()
    {
        cout << "Enter Base : ";
        cin >> base;
        cout << "Enter Height : ";
        cin >> height;
    }

    void area()
    {
        double a = (double)(base * height) / 2.0;
        cout << "Area of Triangle : " << a << endl;
    }
};

class c_rectangle : public c_polygon
{
    int length, breadth;

public:
    c_rectangle()
    {
        cout << "Enter Length : ";
        cin >> length;
        cout << "Enter Breadth : ";
        cin >> breadth;
    }

    void area()
    {
        double a = length * breadth;
        cout << "Area of Rectangle : " << a << endl;
    }
};

int main(int argc, char const *argv[])
{
    c_polygon *bptr = NULL;

    c_triangle ct;
    bptr = &ct;
    bptr->area();

    c_rectangle rt;
    bptr = &rt;
    bptr->area();

    return 0;
}