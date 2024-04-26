#include<iostream>
using namespace std;
int main()
{
	struct book
	{
		int page;
		char bname[20];
		char bwriter[20];
		float price;
	};
	struct book a;
	
	cout<<"Enter the book name:\n ";
	cin>>a.bname;
	cout<<"\n Enter the Book Pages:\n";
	cin>>a.page;
	cout<<"\n Enter the Book Writer:\n";
	cin>>a.bwriter;
	cout<<"\n Enter the Book Price:\n";
	cin>>a.price;
	
	cout<<"\n\n\n ***BOOK STRUCTURE***\n\n";
	cout<<"\n Book Mame:"<<a.bname;
	cout<<"\n Book Pages:"<<a.page;
	cout<<"\n Book Writer:"<<a.bwriter;
	cout<<"\n Book Price:"<<a.price;
	
	return 0;
}
