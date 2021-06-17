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
	 	cout<<"output is:"<<real<<" + "<<imaginary<<"i"<<endl;
	 }
	 
	 int getrealpart()
	 {
	 	return real;
	 }
	 int getimaginarypart()
	 {
	 	return imaginary;
	 
	
	 }
	 
};

   complexnumber add2number(complexnumber n1,complexnumber n2)
    {
    	int i;
    	float r;
    	r = n1.getrealpart()+n2.getrealpart();
    	i = n1.getimaginarypart()+n2.getimaginarypart();
    	
    	complexnumber temp(r,i);
    	return temp;
    	
	}

int main()
{
	complexnumber c1(4,5) ,c2(2,3),c3;
	c1.displayData();
	c2.displayData();
	
	c3 = add2number(c1,c2);
	c3.displayData();
	
	return 0;
}


