// array operation

#include <iostream>
using namespace std;

int main()
{ 
   int A[3];
   int B[3];
   int add[3],sub[3],mul[3];
   
   cout<<"enter 3 int for array A:"<<endl;
   for(int i=0;i<3;i++)
   {
   	 cin>>A[i];
   }

   cout<<"enter 3 int for array B:"<<endl;
   for(int i=0;i<3;i++)
   {
   	 cin>>B[i];
   }
   
   cout<<"ADDITION"<<endl;
   for(int i=0;i<3;i++)
   {
   	 add[i]=A[i]+B[i];
   	 cout<<add[i]<<" ";
   }   
  
  
 return 0;
}
