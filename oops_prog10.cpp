#include <iostream>
using namespace std;

class person
{
protected:
    int EmpID;
    string Name;

public:
    void get_emp_data()
    {
        cout << "Employee ID : " << EmpID << endl;
        cout << "Name : " << Name << endl;
    }
};

class account : virtual public person
{
protected:
    int Salary;
    int Bonus;

public:
    void get_salary()
    {
        cout << "Salary : " << Salary << endl;
        cout << "Bonus : " << Bonus << endl;
    }
};

class admin : virtual public person
{
protected:
    string Department;

public:
    void get_dept()
    {
        cout << "Department : " << Department << endl;
    }
};

class master : public account, public admin
{
public:
    master()
    {
        EmpID = -1;
        Name = "";
        Salary = -1;
        Bonus = -1;
        Department = "";
    }

    void set_data()
    {
        cout << "Enter Employee ID : ";
        cin >> EmpID;
        cin.ignore();
        cout << "Enter Name : ";
        getline(cin, Name);
        cout << "Enter Salary : ";
        cin >> Salary;
        cout << "Enter Bonus : ";
        cin >> Bonus;
        cout << "Enter Department : ";
        cin >> Department;
        cout << "Details saved successfully" << endl;
    }

    void update_data()
    {
        cout << "Enter the data to be updated (1. Department 2. Salary 3. Exit) : ";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the new Department : ";
            cin >> Department;
            cout << "Details updated" << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter the updated Salary : ";
            cin >> Salary;
            cout << "Details updated" << endl;
        }
        else if (choice == 3)
        {
            return;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }

    void display_data()
    {
        get_emp_data();
        get_salary();
        get_dept();
    }
};

int main(int argc, char const *argv[])
{
    master m;
    m.set_data();
    m.update_data();
    m.display_data();
    return 0;
}