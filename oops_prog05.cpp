#include <iostream>
using namespace std;

class friendfunc2;

class friendfunc1
{
    double a, b, c;
    public:
        friendfunc1(double a1, double b1, double c1)
        {
            a = a1;
            b = b1;
            c = c1;
        }

        friend double average(friendfunc1, friendfunc2);
};

class friendfunc2
{
    double a, b;
    public:
        friendfunc2(double a1, double b1)
        {
            a = a1;
            b = b1;
        }

        friend double average(friendfunc1, friendfunc2);
};

double average(friendfunc1 ff1, friendfunc2 ff2)
{
    double sum = ff1.a + ff1.b + ff1.c + ff2.a + ff2.b;
    return sum / 5.0;
}

int main(int argc, char const *argv[])
{
    double a, b, c, d, e;
    cout<<"Enter 5 numbers : ";
    cin>>a>>b>>c>>d>>e;
    friendfunc1 f1(a, b, c);
    friendfunc2 f2(d, e);
    double avg = average(f1, f2);

    cout<<"Average is : "<<avg<<endl;
    return 0;
}