#include <iostream>

#define sum(a, b) (a + b)
#define difference(a, b) (a - b)
#define product(a, b) (a * b)
#define quotient(a, b) ((b == 0) ? -1 : (a / b))

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

    void calculate()
    {
        cout << "Sum : " << sum(a, b) << endl;
        cout << "Difference : " << difference(a, b) << endl;
        cout << "Product : " << product(a, b) << endl;
        cout << "Quotient : " << quotient(a, b) << endl;
    }
};

int main(int argc, char const *argv[])
{
    Calculator c;
    c.get_data();
    c.calculate();

    return 0;
}