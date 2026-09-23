#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    float cgpa;

public:

    Student()
    {
        name = "Unknown";
        rollNo = 0;
        cgpa = 0;
    }

    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        cgpa = 0;
    }

    Student(string n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;
    Student s2("NIKITA", 1,9.0);
    Student s3("DIKSHA", 2, 9.6);

    cout << "STUDENT1:" << endl;
    s1.display();

    cout << "STUDENT2:" << endl;
    s2.display();

    cout << "STUDENT3:" << endl;
    s3.display();

    return 0;
}
