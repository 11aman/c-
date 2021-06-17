#include <iostream>
using namespace std;

class mybaseclass
{
	public:
		int x;
		static int count;
		
		mybaseclass()
		{
			count++;
		}
};


int mybaseclass::count=0;


int main()
{
	cout<<"intial count:"<<mybaseclass::count<<endl;
	mybaseclass obj1,obj2;
	cout<<"count after ++:"<<mybaseclass::count;
	return 0;
}
