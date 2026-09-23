#include <iostream>
using namespace std;

class Academic
{
protected:
    int marks;

public:
    void displayMarks()
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Sports
{
protected:
    int Score;

public:
    void display_Sports_Score()
    {
        cout << "Enter Sports Score: ";
        cin >> Score;
    }
};

class Result : public Academic, public Sports
{
public:
    void display()
    {
        int total = marks + Score;

        cout << "\nResult" << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << Score << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    Result r;
    
    r.displayMarks();
    r.display_Sports_Score();
    r.display();

    return 0;
}
