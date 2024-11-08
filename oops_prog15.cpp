#include <iostream>
using namespace std;

class Employee
{
    static int Total;
    int ID;
    int Salary;

public:
    void get_data()
    {
        cout << "Enter ID : ";
        cin >> ID;
        cout << "Enter Salary : ";
        cin >> Salary;

        Total += Salary;
    }

    static void get_total()
    {
        cout << "Total Salary : " << Total << endl;
    }
};

int Employee ::Total;

int main(int argc, char const *argv[])
{
    Employee employee[10];
    for (int i = 0; i < 10; i++)
    {
        employee[i].get_data();
    }

    Employee ::get_total();

    return 0;
}