#include <iostream>
#include <string>
using namespace std;

class Print {
	
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(int i, double b) {
        cout << "Integer: " << i << endl;
        cout << "Double: " << b << endl;
    }

    void display(int i, double b, string str) {
        cout << "Integer: " << i << endl;
        cout << "Double: " << b << endl;
        cout << "String: " << str << endl;
    }
};

int main() {
    Print p1;

    p1.display(200);
    p1.display(200, 100.33);
    p1.display(200, 100.88, "Khushi");

    return 0;
}

