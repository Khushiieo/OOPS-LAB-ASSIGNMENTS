#include<iostream>
using namespace std;

class Calculator{
	public:
		void sum (int a, int b)
		{
			cout<<"sum of tow integers:"<< a+b << endl;		
		}
		void sum (int a , int b , int c)
		{
			cout<<"sum of three integers:"<< a+b+c << endl;
		}	
		void sum (double a, double b)
		{
			cout<< "sum of two double no:" << a+b << endl;
		}
};

int main()
{
	
	Calculator ca1;
	ca1.sum(10,20);
	ca1.sum(10,20,30);
	ca1.sum(10.0,20.0);
	
	return 0;
}

