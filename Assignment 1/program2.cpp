#include <iostream>
using namespace std;

int main()
{
    float C, F;

    cout << "Enter temperature in Celsius: ";
    cin >> C;

    F = (9 * C) / 5 + 32;

    cout << "Temperature in Fahrenheit = " << F;

    return 0;
}
