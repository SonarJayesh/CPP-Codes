#include<iostream>
using namespace std;
struct stud
{
	int roll;
	char name[20];
	float scholarship;	
};
int main()
{
	struct stud s;
	cout<<"Enter the Roll No:"<<endl;
	cin>>s.roll;
	cout<<"Enter the student Name:"<<endl;
	cin>>s.name;
	cout<<"Enter the  student Scholarship:"<<endl;
	cin>>s.scholarship;
	
	cout<<"Roll no:"<<s.roll<<endl;
	cout<<"Name:"<<s.name<<endl;
	cout<<"Scholarship:"<<s.scholarship<<endl;
	
}
