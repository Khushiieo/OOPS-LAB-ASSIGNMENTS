#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void showPerson()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Employee : public Person
{
protected:
    int employeeID;

public:
    void showEmployee()
    {
        showPerson();

        cout << "Enter Employee ID: ";
        cin >> employeeID;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    void showManager()
    {
        showEmployee();

        cout << "Enter Department: ";
        cin >> department;
    }

    void display()
    {
        cout << "\nDetails" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m;

    m.showManager();
    m.display();

    return 0;
}
