#include <iostream>
using namespace std;

int main()
{
	int arr[] = {5,4,10,1,6,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i,j,temp;
	
//	cout<<n<<endl;
	
	cout<<"unsorted"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	for(int i=1;i<n;i++)
	{
		temp = arr[i];
		j = i-1;
		
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	
	cout<<"sorted"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
