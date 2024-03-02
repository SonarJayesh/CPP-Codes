//constructor and distructor 

#include<iostream>
using namespace std;
class a{
	int n;
	public:
		a()
		{
			n=10;
			cout<<"number="<<n<<endl;
		}
		~a(){
			
			cout<<"Destroyed object"<<endl;
			cout<<"Number :"<<n<<endl;
		}
};
int main()
{
	a obj,obj1;
	
	return 0;
}
