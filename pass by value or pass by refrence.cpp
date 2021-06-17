// PASS BY VALUE & PASS BY REFERENCE

#include <iostream>
using namespace std;

//call by value or pass by value
void passbyValue(int x, int y)
{
   	int z = x;
   	x=y;
   	y=z;
}

void passbyRefrence(int &x,int &y)
{
	int z = x;
   	x=y;
   	y=z;
}

void passbyAddress(int *x,int *y)//pass by pointer
{
	int z = *x;
   	*x=*y;
   	*y=z;
}

int main()
{ 
  int a=5 , b=6;
  cout<<"before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
  //call function
  
 // passbyValue(a,b);
 //passbyRefrence(a,b);
 
 passbyAddress(&a,&b);
  
   cout<<"After swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;  
  return 0;
}

