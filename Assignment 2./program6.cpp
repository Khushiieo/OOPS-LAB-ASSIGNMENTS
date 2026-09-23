#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:

    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(5, 3);

    cout << "Default Constructor:" << endl;
    c1.display();

    cout << "Parameterized Constructor:" << endl;
    c2.display();

    return 0;
}
