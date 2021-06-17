#include <iostream>
using namespace std;

class base
{
   protected: 
   int val;
};

class derived1 : public base{
	
	public:
		derived1()
		{
			val=1;
		}
		void getvalue()
       {
       	cout<<"derived1 int:"<<val<<endl;
	   }
};


class derived2 : public base{
	
	public:
		derived2()
		{
			val=2;
		}
		void getvalue()
       {
       	cout<<"derived 2 int:"<<val<<endl;
	   }
};

class derived3 : public derived1,public derived2{
	
	public:
       void getvalue()
       {
       	cout<<"int:";
		   derived1::getvalue();
       	cout<<"int:";
		   derived2::getvalue();

 	   }
};



int main()
{
	derived3 obj;
	obj.getvalue();
	return 0;
}
