//multiple inheritance

#include<iostream>
using namespace std;
class base1{
	int a,b;
	 public:
	 	void input(){
	 		cout<<"Enter the number of base 1:";;
	 		cin>>a>>b;
		 }
		 void show(){
		 	cout<<"a="<<a<<endl;
		 	cout<<"b="<<b<<endl;
		 }
};

class base2{
	int x,y;
	 public:
	 	void number(){
	 		cout<<"Enter the number of base 2:";
	 		cin>>x>>y;
		 }
		 void view(){
		 	cout<<"x="<<x<<endl;
		 	cout<<"y="<<y<<endl;
		 }
};
class derive:public base1{
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
	base1 bas1;
	base2 bas2;
	derive der;
	
	bas1.input();
	bas1.show();
	
	bas2.number();
	bas2.view();
	
	der.getdata();
	der.disp();
	
	der.input();
	der.show();
}
