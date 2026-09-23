#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    string model;

public:
    void inVehicle()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }
};

class Car : public Vehicle
{
private:
    int doors;

public:
    void inCar()
    {
        inVehicle();

        cout << "Enter Number of Doors: ";
        cin >> doors;
    }

    void display()
    {
        cout << "\nCar Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << doors << endl;
    }
};

class Bike : public Vehicle
{
private:
    int engineCapacity;

public:
    void inBike()
    {
        inVehicle();

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void display()
    {
        cout << "\nBike Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity <<endl;
    }
};

int main()
{
    Car c;
    Bike b;

    cout << "Enter Car Details:" << endl;
    c.inCar();

    cout << "\nEnter Bike Details:" << endl;
    b.inBike();

    c.display();
    b.display();

    return 0;
}
