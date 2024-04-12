#include<iostream>
using namespace std;
int sub(int a,int b)
{
	int sub=a-b;
}
int main()
{
	
	int a,b,subtract;
	cout<<"Enter the 2 No:";
	cin>>a>>b;
	
	subtract=sub(a,b);
	cout<<"subtraction="<<subtract;
    
	return 0;
}
