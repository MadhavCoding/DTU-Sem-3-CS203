#include <iostream>
using namespace std;

class Binary_String
{
    string s;

public:
    Binary_String() {}

    Binary_String(string bs)
    {
        s = bs;
    }

    void get_data()
    {
        cout << "Enter a Binary String (consisting of 0s and 1s) : ";
        cin >> s;
    }

    void display()
    {
        cout << "Entered string is : ";
        cout << s << endl;
    }

    Binary_String operator!()
    {
        string s1 = this->s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s1[i] == '0')
                s1[i] = '1';
            else
                s1[i] = '0';
        }

        Binary_String bs1(s1);
        return bs1;
    }
};

int main(int argc, char const *argv[])
{
    Binary_String bs1;
    bs1.get_data();
    bs1.display();

    Binary_String bs2;
    bs2 = !bs1;
    bs2.display();

    return 0;
}