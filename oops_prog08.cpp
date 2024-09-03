#include <iostream>
using namespace std;

class absolute
{
    public:
        int func(int a)
        {
            if(a >= 0) return a;
            return -1 * a;
        }

        float func(float a)
        {
            if(a >= 0) return a;
            return -1.0 * a;
        }
};

int main(int argc, char const *argv[])
{
    
    int a;
    float b;
    cout<<"Enter an integer : ";
    cin>>a;
    cout<<"Enter a float : ";
    cin>>b;

    absolute a1;
    cout<<"Absolute Value of a : "<<a1.func(a)<<endl;

    cout<<"Absolute Value of b : "<<a1.func(b)<<endl;
    return 0;
}