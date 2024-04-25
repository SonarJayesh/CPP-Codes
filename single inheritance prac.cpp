#include<iostream>
using namespace std;
//single inheritance

class base{
	int a,b;
	 public:
	 	void input(){
	 		cout<<"Enter the number:";;
	 		cin>>a>>b;
		 }
		 void show(){
		 	cout<<"a="<<a<<endl;
		 	cout<<"b="<<b<<endl;
		 }
};
class derive:public base{
	int m,n;
	 public:
	 	void getdata(){
	 		cout<<"Enter the no:";
	 		cin>>m>>n;
		 }
		 void disp(){
		 	cout<<"m="<<m<<endl;
		 	cout<<"n="<<n<<endl;
		 }
};
int main()
{
	base ob;
	derive ob1;
	
	ob.input();
	ob.show();
	
	ob1.getdata();
	ob1.disp();
	
	ob1.input();
	ob1.show();
}
