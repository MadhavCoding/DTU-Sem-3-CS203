#include <iostream>
using namespace std;

class arith_ops
{
    public :
        inline void add (int a, int b)
        {
            cout<<"Sum is "<<a+b<<endl;
        }

        inline void subtract (int a, int b)
        {
            cout<<"Difference is "<<a-b<<endl;
        }

        inline void multiply (int a, int b)
        {
            cout<<"Product is "<<a*b<<endl;
        }

        inline void divide (int a, int b)
        {
            cout<<"Quotient is "<<a/b<<endl;
        }

        inline void modulo (int a, int b)
        {
            cout<<"Remainder is "<<a%b<<endl;
        }
    
};

int main(int argc, char const *argv[])
{
    arith_ops arithmetic;
    int a, b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;

    arithmetic.add(a, b);
    arithmetic.subtract(a, b);
    arithmetic.multiply(a, b);
    arithmetic.divide(a, b);
    arithmetic.modulo(a, b);
    return 0;
}