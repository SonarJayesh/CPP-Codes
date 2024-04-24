#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0;
	cout<<"\n Enter the Number:";
	cin>>n;
	do{
		r=n%10;
		cout<<r;
		n=n/10;
		sum=sum+r;
	}
	while(n>0);
	cout<<"\n sum="<<sum;
}
