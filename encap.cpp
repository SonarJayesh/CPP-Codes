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
	E.name="jayesh sonar";
	E.setvalue(25);
	cout<<E.name;
	
	return 0;
}
