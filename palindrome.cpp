// 121 = 121 palindorme ,123=321 not palindrome

#include <iostream>
using namespace std;

int main()
{ 

cout<<"enter a nmbr to chck palindrome"<<endl;

int n,num,digit,rev=0;

cin>>num; //121
n=num;

while(num!=0)
{
	digit = num%10; //digit = 121%10 = 1 // 2nd step: 12%10 = 2
	rev= (rev*10)+digit;// rev = (0*10)+1 = 1// rev = (1*10)+2 = 12;
	num = num/10; // 121/10 = 12(integer) / 12/10 = 1
} 

if(n==rev)
{
	cout<<" palindrome"<<endl;
}

else
{
	cout<<"not palindrome"<<endl;
}

	return 0;
}
