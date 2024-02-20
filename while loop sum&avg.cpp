#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,avg;
	n=1;
	while(n<=10)
	{
		cout<<n<<"\n";
		sum=sum+n;
		n++;
	}
	cout<<"Sum="<<sum;
	avg=sum/10;
	cout<<"\n avg="<<avg;
}
