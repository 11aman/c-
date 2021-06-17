#include <iostream>
using namespace std;

void sortedarray(int arr[])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		int min  = i;
		
		for(j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
		
		if(min!=i)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	
	
}


int main()
{
	int myarr[5],i;
	
	cout<<"enter array elements"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>myarr[i];
	}
	cout<<endl;
	
	cout<<"unsorted array elements"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	sortedarray(myarr);
	
	cout<<"sorted array elements"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
}
