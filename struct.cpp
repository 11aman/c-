// STRUCTURE

#include <iostream>
using namespace std;

struct Person
{
	char name[100];
	int age;
	double salary;	
};

int main()
{ 
  Person p1;
  cout<<"enter person details"<<endl<<"enter person name:"<<endl;
  cin.getline(p1.name,100);
  cout<<"enter age:"<<endl;
  cin>>p1.age;
  cout<<"enter salary:"<<endl;
  cin>>p1.salary;
  
  cout<<endl<<"person details are asfollows:"<<endl;
  cout<<"name:"<<p1.name<<endl;
  cout<<"age:"<<p1.age<<endl;
  cout<<"salary:"<<p1.salary<<endl;
  
  return 0;
}

