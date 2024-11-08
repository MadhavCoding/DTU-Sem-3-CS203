#include <iostream>
using namespace std;

class detail
{
    string name, surname;
    int marks;
    char gender, result;

public:
    detail(string name1, string surname1, int marks1, char gender1, char result1)
    {
        name = name1;
        surname = surname1;
        marks = marks1;
        gender = gender1;
        result = result1;
    }
    void display()
    {
        cout << "Personal Details" << endl;
        cout << "Name : " << name << endl;
        cout << "Surname : " << surname << endl;
        cout << "Total Marks : " << marks << endl;
        cout << "Gender : " << (gender == 'M' ? "Male" : "Female") << endl;
        cout << "Result : " << (result == 'P' ? "Pass" : "Fail") << endl;
    }
};

int main(int argc, char const *argv[])
{
    detail d("Madhav", "Mishra", 100, 'M', 'P');
    d.display();
    return 0;
}