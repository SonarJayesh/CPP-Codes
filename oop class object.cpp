#include<iostream>
using namespace std;
class calculas
{
	int a,b;
	public:void getdate()
	{
		cout<<"Enter the 2 No\n";
		cin>>a>>b;
	}
	void add(); void sub();
};
	
	void calculas::add()
	{
		int c;
		c=a+b;
		cout<<"Addition="<<c<<endl;
	}
	void calculas::sub()
	{
		int c;
		c=a-b;
		cout<<"subtraction="<<c;
	}
int main()
{
	calculas addsub;
	addsub.getdate();
	addsub.add();
	addsub.sub();
	return 0;
}
