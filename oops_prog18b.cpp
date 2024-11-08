#include <iostream>
using namespace std;

class Employee
{
    int ID;
    string Department;

public:
    Employee(int id, string dept)
    {
        ID = id;
        Department = dept;
        cout << "Employee class constructor" << endl;
    }

    void show_emp_data()
    {
        cout << "ID : " << ID << endl;
        cout << "Department : " << Department << endl;
    }
};

class Salary
{
    int salary, bonus;

public:
    Salary(int sal, int bon)
    {
        salary = sal;
        bonus = bon;
        cout << "Salary class constructor" << endl;
    }

    void show_salary_data()
    {
        cout << "Salary : " << salary << endl;
        cout << "Bonus : " << bonus << endl;
    }
};

class Faculty : public Employee, public Salary
{
    string Name;

public:
    Faculty(int ID, string name, string dept, int sal, int bon) : Employee(ID, dept), Salary(sal, bon)
    {
        Name = name;
        cout << "Faculty class constructor" << endl;
    }

    void display()
    {
        cout << "Name : " << Name << endl;
        show_emp_data();
        show_salary_data();
    }
};

int main(int argc, char const *argv[])
{
    Faculty f(1101, "Madhav Mishra", "Computer Science", 10000000, 500000);
    f.display();

    return 0;
}