#include <iostream>
using namespace std;

template <class T>
class Pair
{
    T first, second;

public:
    Pair()
    {
        cout << "Enter the first value : ";
        cin >> first;
        cout << "Enter the second value : ";
        cin >> second;
    }

    void get_max()
    {
        T answer = max(first, second);
        cout << "Maximum Value : " << answer << endl;
    }
};

int main(int argc, char const *argv[])
{
    Pair<int> p;
    p.get_max();

    Pair<float> q;
    q.get_max();

    Pair<double> r;
    r.get_max();

    return 0;
}