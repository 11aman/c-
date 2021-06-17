#include <iostream>
using namespace std;

void countsort(int arr[], int size)
{
	int range = 10;
	int i;
	int count_arr[10];
	int output_arr[size];
	
	for(i=0;i<range;i++)
	{
		count_arr[i] = 0;
	}
   
   
	for(i=0;i<size;i++)
	{
		++count_arr[arr[i]];
	}
	

	
	for(i=1;i<range;i++)
	{
		count_arr[i] = count_arr[i] + count_arr[i-1];
	}
	
   
	for(i=0;i<size;i++)
	{
		output_arr[--count_arr[arr[i]]] = arr[i];
	}
	

	for(i=0;i<size;i++)
    {
		arr[i] = output_arr[i];
	}
	
}



int main()
{
	int size = 7,i;
	int arr[size] = {1,4,1,2,5,2,7};
	
   cout<<"before sorting array"<<endl;
   for(int i=0;i<size;i++)
   {
   	cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   countsort(arr,size);
   
   cout<<"After sorting array"<<endl;
   for(int i=0;i<size;i++)
   {
   	cout<<arr[i]<<" ";
   }
	
}
