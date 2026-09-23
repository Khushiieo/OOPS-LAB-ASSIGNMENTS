#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:

    void set()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display()
    {
        cout << real;

        if (imaginary >= 0)
            cout << " + " << imaginary << "i";
        else
            cout << " - " << -imaginary << "i";

        cout << endl;
    }

    Complex sum(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.set();

    cout << "Enter second complex number:\n";
    c2.set();

    c3 = c1.sum(c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}
