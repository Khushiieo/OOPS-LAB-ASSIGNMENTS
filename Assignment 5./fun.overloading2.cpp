#include<iostream>
using namespace std;

class Area{
	public:	
		void display(int side)
		{
			cout<< "area of square is:"<< side * side << endl;
			
		}
		void display(int length, int breadth)
		{
			
			cout<<"area of rectangle is:"<< length * breadth << endl;
			
		}
		void display(double radius)
		{
			cout<<"area of circle is:"<<3.14 * radius * radius << endl;
		}
};


int main(){
	Area a1;
	a1.display(40);
	a1.display(20,20);
	a1.display(20.0);
 return 0;	
}
