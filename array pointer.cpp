#include<iostream>
using namespace std;

int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr,i;
	ptr= &a[5];
	for(i=0;i<5;i++)
	{
		ptr[i]=a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<"*ptr="<<ptr[i]<<endl;
	}
	return 0;
}
