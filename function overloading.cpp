#include<iostream>
using namespace std;

int volume(int);
double volume(double,int);
long volume(long,int,int);

int main()
{
	 cout<<volume(15)<<endl;
	 cout<<volume(2.5,8)<<endl;
	 cout<<volume(100,75,15);
	 
	 return 0;
}
int volume(int s)
	{
		return(5*5*5);
	}
double volume(double r,int h)
	{	
		return(3.14*r*r*h);
	}
long volume(long l,int b,int h)
	{
		return(l*b*h);		
	}	
