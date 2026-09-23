#include <iostream>
using namespace std;

class College
{
protected:
    string collegeName;

public:
    College(string c)
    {
        collegeName = c;
        cout << "College Constructor Called" << endl;
    }
};

class Department : public College
{
private:
    string departmentName;

public:
    Department(string c, string d) : College(c)
    {
        departmentName = d;
        cout << "Department Constructor Called" << endl;
    }

    void display()
    {
        cout << "\nCollege Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};

int main()
{
    Department d("Thapar University", "Computer Engineering");

    d.display();

    return 0;
}
