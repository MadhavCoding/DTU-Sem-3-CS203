#include <iostream>
using namespace std;

class Calculator
{
    double a, b;

public:
    void get_data()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
    }

    inline double sum()
    {
        return a + b;
    }

    inline double difference()
    {
        return a - b;
    }

    inline double product()
    {
        return a * b;
    }

    inline double quotient()
    {
        if (b == 0)
            return -1;
        return a / b;
    }

    void calculate()
    {
        cout << "Sum : " << sum() << endl;
        cout << "Difference : " << difference() << endl;
        cout << "Product : " << product() << endl;
        cout << "Quotient : " << quotient() << endl;
    }
};

int main(int argc, char const *argv[])
{
    Calculator c;
    c.get_data();
    c.calculate();

    return 0;
}