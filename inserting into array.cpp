#include <iostream>
using namespace std;

int main()
{
	int arr[50],size,pos,num,i;
	cout<<"size of array:"<<endl;
	cin>>size;
	cout<<endl;
	
	cout<<"enter elements:"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	cout<<"insert number:"<<endl;
	cin>>num;
	cout<<endl;
	
	cout<<"enter pos:"<<endl;
	cin>>pos;
	cout<<endl;
	
	for(i=size-1;i>=pos-1;i--)
	{
		arr[i+1] = arr[i];
	}
	  arr[pos-1] = num; 
	  size++;
	  
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	  }  
	
	return 0;
}
