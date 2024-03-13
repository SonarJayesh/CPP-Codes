#include<iostream>
using namespace std;
int main()
{
	int roll;
	float math,eng,sci;
	float total,per;
	char name[20];
	
	cout<<" Enter the roll No:\n";
	cin>>roll;
	
	cout<<" Enter the name:\n";
	cin>>name;
	
	cout<<" Enter the math sub marks:\n";
	cin>>math;
	
	cout<<" Enter the English sub marks:\n";
	cin>>eng;
	
	cout<<" Enter the science sub marks:\n";
	cin>>sci;
	
	total=math+eng+sci;
	per=total/3;
	
	cout<<"\n Marks statement \n";
	cout<<"Roll No:"<<roll;
	cout<<"\n Name:"<<name;
	cout<<"\n math marks:"<<math;
	cout<<"\n english marks:"<<eng;
	cout<<"\n science marks:"<<sci;
	cout<<"\nTotal="<<total;
	cout<<"\n percentage="<<per<<"%";
	
	if(per>=75)
	cout<<"\npass with A grade";
	else if(per>=60)
	cout<<"\npass with B grade";
	else if(per>=50)
	cout<<"\nPass with C grade";
	else if(per>=35)
	cout<<"\nPass with D grade";

	else
	cout<<"\n student are fail";
}
