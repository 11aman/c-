// CONSTRUCTOR AND DESTRUCTOR

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
  	// default contrsuctor
  	Cars()
  	{
      cout<<"DEFAULT CONSTUCTOR CALLED"<<endl;
  	 company_name = "BMW";
	 model_name = "First";
	 fuel_type = "petrol";
	 mileage = 50;
	 price = 12000;	
	}
	
	//parameterized constructor
	Cars(string cname, string mname, string ftype, float m, double p)
	{
		cout<<"PARAM CONSTUCTOR CALLED"<<endl;
	 company_name = cname;
	 model_name = mname;
	 fuel_type = ftype;
	 mileage = m;
	 price = p;		
	}
	
	//COPY COnSTRUCTOR
	Cars(Cars &obj)
	{
		cout<<"COPY CONSTUCTOR CALLED"<<endl;
     company_name = obj.company_name;
	 model_name = obj.model_name;
	 fuel_type = obj.fuel_type;
	 mileage = obj.mileage;
	 price = obj.price;		
	}
	
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
 
  Cars car1,car2("AUDI","Q3","petrol",12.5,120000);//object are nothing but variable of type class
 // car1.setData("maruti","altis","petrol",15.5,150000);
  car1.displayData();  
  car2.displayData();  
  
  Cars car3 = car1; //copy constructor is called
  car3.displayData();
  return 0;
}
