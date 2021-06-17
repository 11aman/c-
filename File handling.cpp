// FILE HANDLING

#include <iostream>
#include <fstream>
using namespace std;

int main()
{ 
  
  char arr[100];
  cout<<"enter name and age: "<<endl;
  cin.getline(arr,100);
  
  ofstream myfile("xyz.txt",ios::app);
  myfile.is_open();
  myfile<<arr;
  myfile.close();
  cout<<"file write performed succesfully"<<endl;
  
  cout<<"read from file operation"<<endl;
  char arr1[100];
  ifstream obj("xyz.txt");
  obj.getline(arr1 ,100);
  cout<<"array content: "<<arr1;
  cout<<"file read operation completed"<<endl;
  obj.close();
  
  return 0;
}

