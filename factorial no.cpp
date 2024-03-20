#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i=1;
	cout<<"Enter a number:\n";
	cin>>n;
	while(i<=n)
	{
		fact=fact*i;
		i++;		
	}
	cout<<"\n The factorial of= "<<n<<" is "<< fact;
}
