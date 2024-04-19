//operator overloading using friend function

#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
	demo(int x,int y)
	{
		a=x;
		b=y;	
	}	
	void show()
	{
		cout<<"a="<<a<<" b="<<b<<endl;
	}
	friend demo operator +(demo &obj, demo &obj2);
};
demo operator +(demo &obj, demo &obj2)
{
	demo temp(0,0);
	temp.a=obj.a+obj2.a;
	temp.b=obj.b+obj2.b;
	
	return temp;
}
int main()
{
	demo ob(10,20);  demo ob1(30,40);  demo ob2(0,0);
	ob2=ob+ob1;
	ob2.show();
		
	return 0;		
}
