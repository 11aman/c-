// DYNAMIC MEMORY ALLOCATION

#include <iostream>
using namespace std;

int main()
{ 

 int size;
 int *ptr;
 
 cout<<"enter no of values want to store(size of array):"<<endl;
 cin>>size;
 
 ptr = new int[size];
 
 cout<<"enter values to be stored in array:"<<endl;
 for(int i=0;i<size;i++)
 {
 	cin>>ptr[i];
 }
 
  cout<<"valuesstored in array:"<<endl;
 for(int i=0;i<size;i++)
 {
 	cout<<ptr[i]<<endl;
 }
  
  return 0;
}
