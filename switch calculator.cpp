#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int a,b,choice;
	cout<<"\n Select the Option \n";
	cout<<"1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulus \n 6.Exit\n";
	cin>>choice;
	cout<<"\n Enter the Two No \n ";
	cin>>a>>b;
	
	switch(choice)
	{
		case 1:cout<<"\n Addition="<<(a+b);
		break;
		case 2:cout<<"\n Subtraction="<<(a-b);
		break;
		case 3:cout<<"\n Multiplication="<<(a*b);
		break;
		case 4:cout<<"\n Division="<<(a/b);
		break;
		case 5:cout<<"\n Modulus="<<(a%b);
		break;
		case 6:exit(0);
		break;
	}
	return 0;
}
