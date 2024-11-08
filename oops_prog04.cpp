#include <iostream>
using namespace std;

class bank
{
    int initial, rate;

public:
    // Constructors
    bank()
    {
        initial = rate = 0;
    }
    bank(int init, int rt)
    {
        initial = init;
        rate = rt;
    }

    void display_initial()
    {
        cout << "Initial Amount is " << initial << endl;
    }

    void display_rate()
    {
        cout << "Rate of Interest is " << rate << endl;
    }

    ~bank()
    {
        cout << "This object is being destructed" << endl;
    }
};

int main(int argc, char const *argv[])
{
    bank b1;
    b1.display_initial();
    b1.display_rate();

    bank b2(1000, 5);
    b2.display_initial();
    b2.display_rate();
    return 0;
}