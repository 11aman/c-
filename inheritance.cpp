// INHERITANCE CONCPET

#include <iostream> 
using namespace std;

//base class  
class shape
{
	protected:
		int width;
		int height;
	public:
	   void setwidth(int w)
	   {
	   	width = w;
	   }	
	   void setheight(int h)
	   {
	   	height = h;
	   }
};

//Derived class
class Rectangle:public shape
{
	public:
		int getArea()
		{
			return (width*height);
		}
};

int main()
{ 
 Rectangle rect;
 rect.setwidth(3);
 rect.setheight(5);
 
 cout<<"area: "<<rect.getArea()<<endl;
 
 
  return 0;
}
