//Encapsulation using class.

#include<iostream>
using namespace std;
class encap{
	int age;
	public:
		string name;
		void setvalue(int a){
			age=a;
			cout<<"Age="<<age<<endl;
		}
};
int main()
{
	encap E;
	E.name="jayesh";
	E.setvalue(23);
	cout<< E.name;
	
	return 0;
}
