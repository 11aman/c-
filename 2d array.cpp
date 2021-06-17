// 2D array operation

#include <iostream>
using namespace std;

int main()
{ 

   int myarray[5][5]; //initializing
   int myarray1[2][2] = {1,2,3,4}; // declaration with initilization 
   int myarray2[3][3] = {{1,1,1},{2,2,2},{3,3,3}}; // declaration with initilization
   
   for(int i=0;i<3;i++)
   {
   	 for(int j=0;j<3;j++)
   	   {
   	   	cout<<myarray2[i][j]<<" ";
	   }
	   cout<<endl;
	   
   }
   
   cout<<"enter 5*5 matrix"<<endl;
   for(int i=0;i<5;i++)
   {
   	 for(int j=0;j<5;j++)
   	   {
   	   	cin>>myarray[i][j];
	   }
	   cout<<endl;   
   }
   
   cout<<"values of 5*5 matrix"<<endl;
   for(int i=0;i<5;i++)
   {
   	 for(int j=0;j<5;j++)
   	   {
   	   	cout<<myarray[i][j]<<" ";
	   }
	   cout<<endl;
	   
   }
  
  return 0;
}
