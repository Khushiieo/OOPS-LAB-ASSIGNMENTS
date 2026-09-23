#include <iostream>
using namespace std;

class Demo
{
    int x;

public:

    Demo(int a)
    {
        x = a;
        cout << "Constructor: " << x << endl;
    }

    ~Demo()
    {
        cout << "Destructor: " << x << endl;
    }
};

void test()
{
    Demo d3(3);
    Demo d4(4);

    cout << "Inside function" << endl;
}

int main()
{
    Demo d1(1);
    Demo d2(2);

    cout << "Inside main" << endl;

    test();

    cout << "Back to main" << endl;

    return 0;
}
