#include<iostream>
using namespace std;
struct stud
{
	int roll;
	char name[20];
	float scholarship;	
};
union stud1
{
	int roll;
	char a;
	double z;
};
int main()
{
	struct stud s;
	union stud1 s1;
	cout<<"structure size:"<<sizeof(s)<<endl;
	cout<<"union size:"<<sizeof(s1)<<endl;
	
}
