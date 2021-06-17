#include <iostream>
using namespace std;


class abstraction
{
	private:
		int a,b;
		
	public:
	   
	   void set(int x, int y)
	   { 
	       
		   a=x;
		   b=y;   
	   	
	   }
	   
	   void displaydata()
	   {
	   	cout<<"a:"<<a<<endl;
	   	cout<<"b:"<<b<<endl;
	   };
		
};
int main()
{
    abstraction obj;
    obj.set(10,20);
    obj.displaydata();
	return 0;
}
