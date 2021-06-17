// intro to oops

#include <iostream>
#include <string>
using namespace std;

class Cars
{ 
  private:
 //member variables or data member
 string company_name;	
 string model_name;
 string fuel_type;
 float mileage;
 double price;
 
  public:
 //member functions
  void setData(string cname, string mname, string ftype, float m, double p)
  {
     company_name = cname;
	 model_name = mname;
	 fuel_type = ftype;
	 mileage = m;
	 price = p;	
  }
  
  void displayData()
  {
  	cout<<"car properties"<<endl<<endl;
  	
  	cout<<"car comapny name - "<<company_name<<endl;
  	cout<<"car model name - "<<model_name<<endl;
  	cout<<"car fuel type - "<<fuel_type<<endl;
  	cout<<"car mileage - "<<mileage<<endl;
  	cout<<"car price - "<<price<<endl;
  }
 
};

int main()
{ 
 
 Cars car1;//object are nothing but variable of type class
 
  car1.setData("maruti","altis","petrol",15.5,150000);
  car1.displayData();  
 
  return 0;
}
