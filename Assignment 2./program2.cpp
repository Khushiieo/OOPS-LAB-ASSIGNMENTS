#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r(10, 5);

    r.area();

    return 0;
}
