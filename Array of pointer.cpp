#include<iostream>
using namespace std;
const int max=3;
int main()
{
	int var[]={10,20,30};
	int i,*ptr,max=3;
	ptr=var;
	
	for(i=0;i<max;i++)
	{
		cout<<"Address of variable="<<i <<"-" <<ptr<<endl;
		cout<<"Value of variable="<<i<<"-"<<*ptr<<endl;
		ptr++;
	}
	return 0;
}
