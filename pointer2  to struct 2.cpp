//POINTER TO STRUCTURE

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

   Person p1;
//   
//   cout<<"enter person age salary and age"<<endl;
//    cin>>p1.name;
//   	cin>>p1.age;
//   	cin>>p1.salary;
//   	
//   	cout<<"Detail of person :"<<endl;
//    cout<<"name:"<<p1.name<<endl;
//    cout<<"age:"<<p1.age<<endl;
//    cout<<"salary:"<<p1.salary<<endl;
    
    Person *ptr = &p1;
    
    cin>>ptr->name;
   	cin>>ptr->age;
   	cin>>ptr->salary;
    
    cout<<"Detail of person using pointer :"<<endl;
    cout<<"name:"<<ptr->name<<endl;
    cout<<"age:"<<ptr->age<<endl;
    cout<<"salary:"<<ptr->salary<<endl;
    
    
  return 0;
}

