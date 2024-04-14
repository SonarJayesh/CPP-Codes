#include<iostream>
using namespace std;

inline add(int a,int b)
{
	return a+b;
}

int main()
{
	int value= add(20,30);
	cout<<"value="<<value;
	
	return 0;
}

