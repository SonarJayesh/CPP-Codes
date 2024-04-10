#include<iostream>
using namespace std;
class A
{
	int num1=20,num2=30;
	public:
		void fun(){
			int sum=num1+num2;
			cout<<"Addition ="<<sum<<endl;
		}	
		void fun(int x,int y){
			int sub=x-y;
			cout<<"Suntraction="<<sub<<endl;
		}
};
int main()
{
	A jay;
	jay.fun();
	jay.fun(10,50);
	return 0;
}
