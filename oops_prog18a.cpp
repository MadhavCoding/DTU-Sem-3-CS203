#include <iostream>
using namespace std;

class Employee
{
    int ID;
    string Name;

public:
    Employee(int id, string name)
    {
        ID = id;
        Name = name;
        cout << "Employee class constructor" << endl;
    }

    void display()
    {
        cout << "ID : " << ID << endl;
        cout << "Name : " << Name << endl;
    }
};

class Faculty : public Employee
{
    int Salary;
    int Bonus;

public:
    Faculty(int id, string name, int salary, int bonus) : Employee(id, name)
    {
        Salary = salary;
        Bonus = bonus;
        cout << "Faculty class constructor" << endl;
    }

    void show_salary()
    {
        display();
        cout << "Salary : " << Salary << endl;
        cout << "Bonus : " << Bonus << endl;
    }
};

class Staff : public Employee
{
    int Salary;

public:
    Staff(int id, string name, int salary) : Employee(id, name)
    {
        Salary = salary;
        cout << "Staff class constructor" << endl;
    }

    void show_salary()
    {
        display();
        cout << "Salary : " << Salary << endl;
    }
};

int main(int argc, char const *argv[])
{
    Faculty f(1101, "Madhav Mishra", 1000000, 50000);
    f.show_salary();

    Staff s(1011, "Raman Kumar", 100000);
    s.show_salary();

    return 0;
}