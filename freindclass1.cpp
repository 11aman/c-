#include<iostream>
using namespace std;

class myclass1
{
   friend class myclass2;//myclass2 is friend of 1 and can access private memeber
   int x;//it is private as we have not declare anything
   public:
   	  myclass1(int a)
   	  {
   	  	  x=a;
	  }
   	
};

class myclass2
{
	public:
		void showdata( myclass1 obj)
		{
			cout<<"x:"<< obj.x<<endl;
		}
};


int main()
{
	myclass1 obj1(5);
	myclass2 obj2;
	obj2.showdata(obj1);
	return 0;
}
