#include <iostream>
using namespace std;

class Maximum
{
public:
    int findMax(int a, int b)
    {
        if (a>b)
            return a;
        else
            return b;
    }

    int findMax(int a, int b, int c)
    {
        if (a>b && a>c)
            return a;
        else if (b>c && b>a)
            return b;
        else
            return c;
    }

    double findMax(double a, double b)
    {
        if (a>b)
            return a;
        else
            return b;
    }
};

int main()
{
    Maximum m22;

    cout << "Maximum of two integers: "
         << m22.findMax(2, 10) << endl;

    cout << "Maximum of three integers: "
         << m22.findMax(50, 40, 30) << endl;

    cout << "Maximum of two decimal numbers: "
         << m22.findMax(0.1101, 0.10020) << endl;

    return 0;
}

