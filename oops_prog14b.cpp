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

    void sum(double &sum)
    {
        sum = a + b;
    }

    void difference(double &difference)
    {
        difference = a - b;
    }

    void product(double &product)
    {
        product = a * b;
    }

    void quotient(double &quotient)
    {
        if (b == 0)
            quotient = -1;
        quotient = a / b;
    }

    void calculate()
    {
        double sum, difference, product, quotient;

        this->sum(sum);
        this->difference(difference);
        this->product(product);
        this->quotient(quotient);

        cout << "Sum : " << sum << endl;
        cout << "Difference : " << difference << endl;
        cout << "Product : " << product << endl;
        cout << "Quotient : " << quotient << endl;
    }
};

int main(int argc, char const *argv[])
{
    double sum, difference, product, quotient;
    Calculator c;
    c.get_data();
    c.calculate();

    return 0;
}