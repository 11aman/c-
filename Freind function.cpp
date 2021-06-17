// FRIEND FUNCTION

#include <iostream> 
using namespace std;

class Distance
{
	private:
		int meter;
    
	public:
	  Distance()
	  {
	  	meter=0;
      }
	  
	  void displayData()
	  {
	  	cout<<"meter value: "<<meter<<endl;
	  }
	  
	  friend void addValue(Distance &d);
};

void addValue(Distance &d)
{
	d.meter = d.meter+5;
}

int main()
{ 
  Distance d1;
  d1.displayData();
  
  addValue(d1);
  
  d1.displayData();
  return 0;
}
