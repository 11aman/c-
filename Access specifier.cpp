// ACCESS SPECIFIERS

#include <iostream> 
using namespace std;

//base class  
class Mybaseclass
{
    public:
    	int x;
    	Mybaseclass()
    	{
    		x=5;
    		y=6;
    		z=7;
		}
    protected:
	    int y;
	private:
	    int z;		
};


void Myoutsidefunctiomn(Mybaseclass obj)
{
	cout<<"X: "<<obj.x<<endl;
	cout<<"Y: "<<obj.y<<endl;
	cout<<"Z: "<<obj.z<<endl;
}

int main()
{ 
   Mybaseclass obj1;
   

  return 0;
}
