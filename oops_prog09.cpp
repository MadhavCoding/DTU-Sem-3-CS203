#include <iostream>
using namespace std;

class String
{
    string s;

    public :

        String ()
        {
            s = "";
        }

        String(string s1)
        {
            s = s1;
        }

        void display()
        {
            cout<<"String is : "<<s<<endl;
        }

        void operator = (String s1)
        {
            s = s1.s;
        }

        bool operator == (String s1)
        {
            if(s.length() != s1.s.length()) return false;

            for (int i = 0; i < s.length(); i++)
            {
                if(s[i] != s1.s[i]) return false;
            }
            return true;
        }

        String operator + (String s1)
        {
            String res;
            res.s = s + s1.s;
            return res;
        }
};

int main(int argc, char const *argv[])
{
    string s1, s2;
    cout<<"Enter a string : ";
    cin>>s1;
    cout<<"Enter a string : ";
    cin>>s2;

    String SS1(s1), SS2(s2);
    SS1.display();
    SS2.display();

    cout<<"Check Equality : ";
    cout<<(SS1 == SS2 ? "Equal" : "Not Equal")<<endl;

    cout<<"Concatenate : ";
    SS1 = SS1 + SS2;
    SS1.display();
    
    cout<<"Assignment : ";
    SS1 = SS2;
    SS1.display();

    return 0;
}