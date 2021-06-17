// POINTER AND OBJECT

#include <iostream> 
using namespace std;

class ComplexNumber
{
  private:
  int real;
  float imaginary;	
  
  public:
  	ComplexNumber()
  	{
  		
    }
    
    ComplexNumber(int r, float i)
    {
    	real = r;
    	imaginary = i;
	}
	
	void displaydata()
	{
		cout<<"complex nmbr is:"<<real<<" + "<<imaginary<<"i"<<endl;
	}
	int getRealPart()
	{
		return real;
	}
	float getimaginarypart()
	{
		return imaginary;
	}
};

ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2)
{
	int r;
	float i;
	r = n1.getRealPart() + n2.getRealPart();
	i = n1.getimaginarypart() + n2.getimaginarypart();
	ComplexNumber temp(r,i);
	return temp;
}


int main()
{ 
    ComplexNumber comp1(5,4),comp2(4,3),comp3;
    comp3 = add2number(comp1,comp2);
    comp3.displaydata();
    
    
    ComplexNumber *ptr1;
    ptr1 = &comp3;
    cout<<"pointer:"<<ptr1<<endl;
    ptr1->displaydata();
 
  return 0;
}
