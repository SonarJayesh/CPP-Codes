#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age:";
	cin>>age;
	if(age>=18)
	goto vote;
	else
	goto notvote;
	
	vote:
		cout<<"\n Eligible for vote....!";
		return 0;
	notvote:
		cout<<"\n Not Eligible for vote...!";
		
	return 0;		
}
