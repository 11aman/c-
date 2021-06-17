// fibbnocai series eg; 1,2,3,5,8,13,21....
#include <iostream>
using namespace std;

int main()
{ 
  int num,first=0,second=1,next;
  
  cout<<"enter nmbr of terms to be printed in series"<<endl;
  cin>>num;
  
  cout<<"series:"<<endl;
  
  for(int i=0;i<num;i++)
  {
  	 
  	cout<<first<<endl;
  	next = first+second;
  	first = second;
  	second = next;
  	
  }
  
 
}
