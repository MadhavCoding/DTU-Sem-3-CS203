#include <iostream>
using namespace std;

class student;

class average
{
    public:
        double mark_avg(student s1);
};

class student
{
    string name;
    double phy, chem, math, bio, eng;

    public:
        void get_data()
        {
            string n;
            cout<<"Enter Name : ";
            getline(cin, n);
            name = n;

            double p, c, m, b, e;
            cout<<"Enter Physics marks : ";
            cin>>p;
            cout<<"Enter Chemistry marks : ";
            cin>>c;
            cout<<"Enter Mathematics marks : ";
            cin>>m;
            cout<<"Enter Biology marks : ";
            cin>>b;
            cout<<"Enter English marks : ";
            cin>>e;

            phy = p;
            chem = c;
            math = m;
            bio = b;
            eng = e;
        }

        friend class average;

        void display()
        {
            cout<<"Name is "<<name<<endl;

            average avg;
            double avg1 = avg.mark_avg(*this);

            cout<<"Average of marks is : "<<avg1<<endl;
            
        }
};

double average :: mark_avg(student s1)
{
    double sum = s1.phy + s1.chem + s1.math + s1.bio + s1.eng;
    return sum / 5.0;
}

int main(int argc, char const *argv[])
{
    student s1;
    s1.get_data();
    s1.display();
    return 0;
}