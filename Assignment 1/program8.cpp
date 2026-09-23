#include <iostream>
using namespace std;

namespace First
{
    int value = 101;

    void display()
    {
        cout << "First namespace" << endl;
    }
}

namespace Second
{
    string value = "STUDY HOURS";

    void display()
    {
        cout << "Second namespace" << endl;
    }
}

int main()
{
    cout << "Value from First = " << First::value << endl;
    cout << "Value from Second = " << Second::value << endl;

    First::display();
    Second::display();

    return 0;
}
