#include <iostream>
using namespace std;


void merge(int arr[],int l, int m, int r)
{
	int i =l;
	int j = m+1;
	int k = l;
	int temp[5];
	
	while(i<=m && j<=r)
	{
		if(arr[i] < arr[j])
		{
			temp[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	
	while(i<=m)
	{
		temp[k] = arr[i];
		i++;
		k++;
	}
	
	while(j<=r)
	{
		temp[k] = arr[j];
		j++;
		k++;
	}
	
	
	for(int s=l;s<=r;s++)
	{
		arr[s] = temp[s];
	}
}




void mergesort(int arr[],int l , int r)
{
	if(l<r)
	{
		int m = (l+r)/2;
		
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}


int main()
{
	cout<<"enter array size"<<endl;
	int size;
	cin>>size;
	cout<<endl;
	
	
	int myarr[size];
	cout<<"enter "<<size<<" elements in array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>myarr[i];
	}
	cout<<endl;
	
	cout<<"BEFOre sorting array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	mergesort(myarr,0,(size-1));
	
	
	cout<<"BEFOre sorting array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
}
