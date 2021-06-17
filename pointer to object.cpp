#include <iostream>
using namespace std;

class complexnumber
{
	private:
		int real;
		float imaginary;
	
	public:
	 complexnumber()
	 {
	 }
	 
	 complexnumber(int r,float i)
	 {
	 	real = r;
	 	imaginary = i;
	 }	
	 
	 void displayData()
	 {
	 	cout<<"output is"<<real<<" + "<<imaginary<<"i"<<endl;
	 }
	 
};

int main()
{
	complexnumber c1(4,5);
	c1.displayData();
}

