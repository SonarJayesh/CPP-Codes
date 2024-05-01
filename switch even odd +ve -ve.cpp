#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,choice;
	cout<<"menu\n";
	cout<<"\n 1.Even or odd No \n 2.+ve ,-ve No \n 3.exit\n";
	cin>>choice;
	cout<<"\n Enter the No:\n";
	cin>>a;
	switch (choice)
	{
		case 1:if(a%2==0)
		{
			cout<<a<<" Is Even No\n";
		}
		else
		{
			cout<<a<<" Is Odd NO\n";
		}
		break;
		case 2:if(a>0)
		{
			cout<<a<<" Is Positive No \n";
		}
		else
		{
			cout<<a<<" Is Negative No \n";
		}
		break;
		case 3:exit (0);
		break;
	}
	return 0;
}
