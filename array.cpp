// array
#include <iostream>
using namespace std;

int main()
{ 
  
  int arr[3] = {1,2,3};
  double arr1[5];
  arr1[0] = 4.56;
  arr1[1] = 3.74;
  
  char myarr[4];
  myarr[0]= 'a';
  
  int temp_arr[5];
  
  cout<<"enter 5 int var"<<endl;
  
  for(int i=0;i<5;i++)
  {
  	cin>>temp_arr[i];
  }
  
   for(int i=0;i<5;i++)
  {
  	cout<<temp_arr[i]<<endl;
  }
  
  
 return 0;
}
