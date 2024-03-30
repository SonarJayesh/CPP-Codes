//function Overloading

#include<iostream>
using namespace std;
class operation {
	int num1=10,num2=20;
	public:
		void fun(){
			int add=num1+num2;
			cout<<"Addition ="<<add<<endl;
			
		}
		void fun(int a,int b){
			int sub=a-b;
			cout<<"Subtraction ="<<sub;
		}
	
};
int main()
{
	operation j;
	j.fun();
	j.fun(30,50);
	
	return 0;
}

