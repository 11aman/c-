// POINTER AND OBJECT

#include <iostream> 
using namespace std;

class ComplexNumber
{
  private:
  int real;
  float imaginary;	
  
  public:
 
    ComplexNumber(int r, float i)
    { 
    	real = r;
    	imaginary = i;
	}
	
	void displaydata()
	{
		cout<<"complex nmbr is:"<<real<<" + "<<imaginary<<"i"<<endl;
	}
};


int main()
{ 
    ComplexNumber comp1(5,4);
    comp1.displaydata();
 
  return 0;
}
