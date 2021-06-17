#include <iostream>
using namespace std;
//#define max[500];

int main()
{
	
	int n;
	cin>>n;
	
	int arr[10000];
	int q=2;
	int len=1;
	int x=0;
	int num =0;
	arr[0]= 1;
	
	while(q<=n)
	{
		x=0;
		num=0;
		while(x<len)
		{
			
			arr[x] = arr[x]*q;
			arr[x] = arr[x] + num;
			num = arr[x]/10;
			arr[x] = arr[x]%10;
			x++;
		}
//		cout<<len;
		while(num!=0)
		{
			arr[len] = num%10;
			num = num/10;
			len++;
		}
		q++;
		
	}
//	cout<<len;
	while(len)
	{
		len= len-1;
		cout<<arr[len];
		
	}
	
	return 0;
	
}
	

	
	
	
	

