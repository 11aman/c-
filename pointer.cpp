// POINTERS

#include <iostream>
using namespace std;

int main()
{ 

  int var = 5;
  
  //datatype *pointername;
  
  int *ip;
  double *dp;
  float *fp;
  char *ch;
  
  ip = &var;
  
  cout<<"var value: "<<var<<endl;
  cout<<"address in pointer:"<<ip<<endl;
  cout<<"pointer poiting to value:"<<*ip<<endl;
  
  return 0;
}
