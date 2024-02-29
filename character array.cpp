#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int l,c;
	char str1[15],str2[15],str3[15];
	cout<<"Enter the string 1\n";
	cin>>str1;
	strlwr(str1);
	cout<<"\n lower case of string 1="<<str1;
	
	strupr(str1);
	cout<<"\n upper case of string 1="<<str1;
	
	strrev(str1);
	cout<<"\n reverse case of string 1="<<str1;
	
	cout<<"\n Enter the string  2:\n";
	cin>>str2;
	
	cout<<"\n Enter the string  3:\n";
	cin>>str3;
	
	strcpy(str3,str2); 
	cout<<"3rd string is "<<str3;
	
	
}
