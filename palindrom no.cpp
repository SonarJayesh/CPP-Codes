#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	cout<<"Enter the no ";
	cin>>num;
	n=num;
	do{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	cout<<"\n Reverse no is"<<rev<<"\n";
	if(n==rev)
	{
		cout<<n<<" is palindrom\n";
	}
	else
	{
		cout<<n<<" is not palindom";
	}
}
