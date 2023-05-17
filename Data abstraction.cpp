#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		void get()
		{
			cout<<"Method A"<<endl;
		}
		
};
class B : protected A
{
	public :
	void getdata()
	{
		cout<<"Method B";
	}
};
main()
{
	B b1;
	b1.get();
	b1.getdata();
}
