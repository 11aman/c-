// EXCEPTION HANDLING

#include <iostream>
using namespace std;

int main()
{ 
  int num, deno, result;
  
  cout<<"enter num and deno:"<<endl;
  cin>>num>>deno;
  
  try
  {
  	if(deno==0)
  	{
  	throw deno;
    }
    int result = num/deno;
  } 
  
  catch(int ex)
  {
  	cout<<"divide by zero not allowed :"<<ex;
  }
     
 // cout<<"divison is:"<<result;
  
  return 0;
}

