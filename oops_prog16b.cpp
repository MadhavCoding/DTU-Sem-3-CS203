#include <iostream>
using namespace std;

class Complex;

class Addition
{
public:
    Complex sum(Complex, Complex);
};

class Complex
{
    int re, im;

public:
    Complex() {}

    Complex(int a, int b)
    {
        re = a;
        im = b;
    }

    void get_data()
    {
        cout << "Enter Real part : ";
        cin >> re;
        cout << "Enter Imaginary part : ";
        cin >> im;
    }

    void display()
    {
        cout << "The number is : " << re << " + " << im << "i" << endl;
    }

    friend Complex Addition ::sum(Complex, Complex);
};

Complex Addition ::sum(Complex c1, Complex c2)
{
    Complex c3 = {c1.re + c2.re, c1.im + c2.im};
    return c3;
}

int main(int argc, char const *argv[])
{
    Complex c1, c2, c3;
    c1.get_data();
    c2.get_data();

    Addition a;
    c3 = a.sum(c1, c2);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}