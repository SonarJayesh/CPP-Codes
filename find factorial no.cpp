#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i;
	cout<<"\n Enter the no:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"\n the factorial of "<<n<<" is "<<fact;
}
