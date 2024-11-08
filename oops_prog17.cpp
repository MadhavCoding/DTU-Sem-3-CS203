#include <iostream>
using namespace std;

class Polygon
{
public:
    void Area(double radius)
    {
        double area = 3.14 * radius * radius;
        cout << "Area of Circle : " << area << endl;
    }

    void Area(int length, float breadth)
    {
        double area = length * breadth;
        cout << "Area of Rectangle : " << area << endl;
    }

    void Area(long int side)
    {
        double area = side * side;
        cout << "Area of Square : " << area << endl;
    }

    void Area(float base, short height)
    {
        double area = 0.5 * base * height;
        cout << "Area of Triangle : " << area << endl;
    }

    void Area(unsigned int base1, unsigned int base2, long int height)
    {
        double area = 0.5 * height * (base1 + base2);
        cout << "Area of Trapezoid : " << area << endl;
    }
};

int main(int argc, char const *argv[])
{
    Polygon p;

    // For Circle
    double radius;
    cout << "Enter Radius : ";
    cin >> radius;
    p.Area(radius);

    // for rectangle
    int length;
    float breadth;
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Breadth : ";
    cin >> breadth;
    p.Area(length, breadth);

    // for Square
    long int side;
    cout << "Enter Side : ";
    cin >> side;
    p.Area(side);

    // for Triangle
    float base;
    short height;
    cout << "Enter Base : ";
    cin >> base;
    cout << "Enter Height : ";
    cin >> height;
    p.Area(base, height);

    // for Trapezoid
    unsigned int base1, base2;
    long int height1;
    cout << "Enter Base1 : ";
    cin >> base1;
    cout << "Enter Base2 : ";
    cin >> base2;
    cout << "Enter Height : ";
    cin >> height1;
    p.Area(base1, base2, height1);

    return 0;
}