#include <iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main()
{
	int n,i;
	cout<<"enter array size"<<endl;
	cin>>n;
	
	int myarr[n];
    cout<<"enter elements"<<endl;
    
    for(i=0;i<n;i++)
    {
    	cin>>myarr[i];
	}
	
	bubblesort(myarr,n);
	
	cout<<"sorted elements"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<myarr[i]<<" ";
	}
	
}
