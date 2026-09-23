#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void updateCGPA()
    {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
    }

public:

    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails()
    {
        cout << "Enter New Name: ";
        cin >> name;

        cout << "Enter New Roll No: ";
        cin >> rollNo;

        cout << "Enter New Degree: ";
        cin >> degree;
    }

    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin >> hostel;
    }

    void changeCGPA()
    {
        updateCGPA();
    }

    void displaydetails()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << currentCGPA << endl;
    }
};

int main()
{
    Student s;

    s.addDetails();
    s.displaydetails();

    s.updateDetails();
    s.updateHostel();
    s.changeCGPA();

    s.displaydetails();

    return 0;
}
