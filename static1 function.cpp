#include <iostream>
using namespace std;

class mybaseclass
{
	private:
			int x;
		static int count;
		
	public:
	
		mybaseclass()
		{
			count++;
		}
		
		static int getcount()
		{
			return count;
		}
};


int mybaseclass::count=0;


int main()
{
	cout<<"intial count:"<<mybaseclass::getcount<<endl;
	mybaseclass obj1,obj2;
	cout<<"count after ++:"<<mybaseclass::getcount();
	return 0;
}
