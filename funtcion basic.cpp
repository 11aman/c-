// FUNCTIONS 

#include <iostream>
using namespace std;

int main()
{ 

    int a,b;
    
    cout<<"enter 2 no to find grtest"<<endl;
    cin>>a>>b;
    
    int c = max(a,b);//function call
    cout<<"grtest value is:"<<c<<endl;;
    cout<<"grtest out of no:"<<max(7,10)<<endl;
   
  return 0;
}

int max(int x,int y)
{
	 if(x>y)
	 return x;
	 else
	 return y;
}
