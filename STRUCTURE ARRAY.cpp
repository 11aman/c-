// STRUCTURE ARRAY AND POINTER TO STRUCTURE

#include <iostream>
#include <string>
using namespace std;

struct Person
{
	string name;
	int age;
	double salary;	
};

int main()
{ 
  Person p[2];
   
   cout<<"enter person name age adn salary"<<endl;
   for(int i=0;i<2;i++)
   {
   	cin>>p[i].name;
   	cin>>p[i].age;
   	cin>>p[i].salary;
   }
  
  cout<<endl<<"person's' details are asfollows:"<<endl;
   for(int i=0;i<2;i++)
   {
   	cout<<"detail of person:"<<(i+1)<<endl;
   	cout<<"name:"<<p[i].name<<endl;
   	cout<<"age:"<<p[i].age<<endl;;
   	cout<<"salary:"<<p[i].salary<<endl;
   }
  
  return 0;
}

