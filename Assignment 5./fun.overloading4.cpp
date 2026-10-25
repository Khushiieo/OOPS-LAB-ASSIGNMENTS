#include<iostream>
using namespace std;

class Student
{
public:
    void result(int a)
    {
        cout << "Marks in only one subject: " << a << endl;
    }
    void result(int a, int b)
    {
        cout << "Average marks of two subjects: " << (a + b) / 2 << endl;
    }

    void result(int a, int b, int c)
    {
        cout << "Average of three subjects: " << (a + b + c) / 3 << endl;
    }
};

int main()
{
    Student s1;

    s1.result(80);
    s1.result(80, 100);
    s1.result(80, 100, 90);
    return 0;
}

