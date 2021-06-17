#include <iostream>
using namespace std;

int partion(int arr[],int s, int e)
{
	int pivot = arr[e];
	int pindex = s;
	
	for(int i=s;i<e;i++)
	{
		if(arr[i]<pivot)
		{
			swap(arr[i],arr[pindex]);
			pindex++;
		}
	}
	swap(arr[e],arr[pindex]);
	return pindex;
}

void quicksort(int arr[],int s,int e)
{
	if(s<e)
	{
		int p = partion(arr,s,e);
		quicksort(arr, s , (p-1));
		quicksort(arr, (p+1) ,e);
	}
		
}


int main()
{
   int arr[6] ={7,11,13,3,2,9};
   int s = 0;
   int e = 5;
   
   cout<<"before sorting array"<<endl;
   for(int i=0;i<=e;i++)
   {
   	cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   quicksort(arr,s,e);
   
   
   cout<<"after sorting array"<<endl;
   for(int i=0;i<=e;i++)
   {
   	cout<<arr[i]<<" ";
   }
	
}
