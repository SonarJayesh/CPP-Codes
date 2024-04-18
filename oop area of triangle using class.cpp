#include <iostream>
using namespace std;
class area
{

public : int getdate()
{    int b,h;
	cout<<"Enter the height of triangle:";
	cin>>h;
	cout<<"Enter the base of triangle:";
	cin>>b;
}
int rad();
};
int area::rad()
{   int h,b;
	float areatri;
	areatri=0.5*h*b;
	cout<<"Area of triangle ="<<areatri;
}
int main()
{
	area length;
	length.getdate();
	length.rad();
	return 0;
}
