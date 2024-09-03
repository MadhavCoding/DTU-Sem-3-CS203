#include <iostream>
using namespace std;

class swapping
{
    public:
        void swap_value(int &a, int &b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        void swap_reference(int *a, int *b)
        {
            int temp = *a;
            *a = *b;
            *b = temp;
        }

        void display(int a, int b)
        {
            cout<<"After swapping a = "<<a<<" and b = "<<b<<endl;
        }
};

int main(int argc, char const *argv[])
{
    swapping s;
    int a, b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    cout<<"Enter 1 for swapping by value and 2 for swapping by reference : ";
    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:
        s.swap_value(a, b);
        s.display(a, b);
        break;
    
    case 2:
        s.swap_reference(&a, &b);
        s.display(a, b);
        break;
        
    default:
        break;
    }
    return 0;
}