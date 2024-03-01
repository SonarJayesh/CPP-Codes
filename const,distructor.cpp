#include<iostream>
using namespace std;

class test{
	int n;
	public:
		test()
		{
			n=10;
			cout<<n <<endl;
		}
		~test()
		{
			cout<<"\n Object are destroyed"<<endl;
			cout<<n;
		}
	
};
int main()
{
	test obj,obj2;
}
