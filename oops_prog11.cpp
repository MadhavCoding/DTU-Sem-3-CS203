#include <iostream>
using namespace std;

class pntr_obj
{
    int roll_no;
    string name;

public:
    void set_data(int roll_no, string name)
    {
        this->roll_no = roll_no;
        this->name = name;
    }

    void display()
    {
        cout << "Roll No. : " << this->roll_no << endl;
        cout << "Name : " << this->name << endl;
    }
};

int main(int argc, char const *argv[])
{
    pntr_obj p;
    int roll;
    cout << "Enter roll no. : ";
    cin >> roll;
    cin.ignore();
    string name;
    cout << "Enter name : ";
    getline(cin, name);
    p.set_data(roll, name);
    p.display();
    return 0;
}