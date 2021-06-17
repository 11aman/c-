// INLINE FUNCTIONS AND DEFAULT PARAMETERS

#include <iostream>
using namespace std;

int sum(int x,int y,int z=3,int a=4)
{
	return (x+y+z+a);
}
int main()
{ 
  cout<<"summ is:"<<sum(1,2);
  return 0;
}

