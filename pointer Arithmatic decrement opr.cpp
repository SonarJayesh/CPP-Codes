#include<iostream>
using namespace std;
const int max=3;
int main()
{
	int var[]={10,20,30};
	int i,*ptr,max=3;
	ptr=&var[max-1];
	for(i=max;i>0;i--)
	{
		cout<<"Address of Variable "<<i-1<<ptr<<endl;
		cout<<"Value of Variable "<<i-1<<*ptr<<endl;
		i--;
	}
	return 0;
 } 
