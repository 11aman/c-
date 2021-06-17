#include<iostream>
using namespace std;

int sum(int num)
{
	if(num!=0)
	  return (num + sum(num-1));
	else
	  return num; 
}


int main()
{
	int n;
	cin>>n;
	
	int total = sum(n);
	
	cout<<"the total:"<< total<<endl;
}
