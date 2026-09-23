#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;

public:

    Student()
    {
        name = "Khushi";
        rollNo = 1;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}
