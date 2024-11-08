#include <iostream>
using namespace std;

class Employee
{
    int Empnumber;
    string Empname;

public:
    void getdata(int Enum, string Ename)
    {
        Empnumber = Enum;
        Empname = Ename;
    }

    void display()
    {
        cout << "Employee number is " << Empnumber << endl;
        cout << "Employee name is " << Empname << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee E[6];
    for (int i = 0; i < 6; i++)
    {
        int Enum;
        string Ename;
        cout << "Enter number : ";
        cin >> Enum;
        cout << "Enter name : ";
        cin >> Ename;
        E[i].getdata(Enum, Ename);
        E[i].display();
    }

    return 0;
}