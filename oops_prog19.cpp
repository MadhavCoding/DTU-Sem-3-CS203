#include <iostream>
using namespace std;

class Number
{
protected:
    int num;

public:
    virtual void getData() = 0;
    virtual void showData() = 0;
    virtual void getResult() = 0;
};

class Process : public Number
{
public:
    void getData()
    {
        cout << "Enter a number : ";
        cin >> num;
    }
    void showData()
    {
        cout << "Entered number is : " << num << endl;
    }
    void getResult()
    {
        cout << "Square : " << num * num << endl;
        cout << "Cube : " << num * num * num << endl;
    }
};

int main(int argc, char const *argv[])
{
    Number *num;
    Process p;
    num = &p;
    num->getData();
    num->showData();
    num->getResult();

    return 0;
}