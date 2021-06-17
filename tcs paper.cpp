#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char arr[27]={'b','a','d','c','f','e','h','g','j','i','l','k','n','m','p','o','r','q','t','s','v','u','x','w','z','y'};
	char alpha[26];
	char num[100];
	int i,len,j;
	char m;
	
	for(i=0;i<26;i++)
	{
	    alpha[i] = 'a'+i;
	}
	
	alpha[i] = '\0';
	
	char a[100];
	gets(a);
	len = strlen(a);
	cout<<arr[1]<<endl;
	cout<<arr[0]<<endl;
	cout<<a<<endl;

     
     for(i=0;i<len;i++)
     {
     	for(j=0;j<27;j++)
     	{
     		if(a[i]==alpha[j])
     		{
     			num[i] = j;
     			break;
			}
		}
	 }
	 
	 for(i=0;i<len;i++)
	 {
	 	m = num[i];
	 	cout<<arr[m];
	 }
	
  return 0;
}
