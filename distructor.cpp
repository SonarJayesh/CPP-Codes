#include<iostream>
using namespace std;
int count=0;
class alpha
{
	public:
		alpha(){
			count++;
			cout<<"\n no of object created"<<count;
		}
		~alpha(){
			count--;
			cout<<"\n no of object destroyed"<<count;
		}
		
};
int main()
{
	alpha A1,A2,A3,A4;
	cout<<"\n Enter Block 1";
	alpha A5;
	cout<<"\n Enter Block 2";
	alpha A6;
	
	return 0;
}
