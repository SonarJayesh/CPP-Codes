#include<iostream>
using namespace std;

int main()
{
	try{
		int age=15;
		if(age>=18)
		{
			cout<<"Access granted-you are old enough.";
		}
		else
		{
			throw(age);		
		}
	}
	catch(int mynum)
	{
		cout<<"Access denied- You must be at least 18 year old.\n";
		cout<<"Age is :"<<mynum;
	}
	return 0;
}
