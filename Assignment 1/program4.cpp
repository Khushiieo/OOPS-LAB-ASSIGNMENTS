#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;


// detail of the student
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

        cout << "Enter Current CGPA: ";
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

    void updateCGPA()
    {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin >> hostel;
    }

    void displaydetails()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main()
{
    Student p;

    p.addDetails();

    cout << "\nOriginal Details:";
    p.displaydetails();

    p.updateCGPA();
    p.updateHostel();

    cout << "Updated Details:";
    p.displaydetails();

    return 0;
}
