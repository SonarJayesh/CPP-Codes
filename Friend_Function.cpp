#include<iostream>
using namespace std;
class sample{
	int a,b;
	public:
		void setvalue(){
			a=20;
			b=40;
		}
		friend float mean(sample s);
};
float mean(sample s)
{
	return (s.a+s.b);
}
int main()
{
	sample x;
	x.setvalue();
	
	cout<<"mean value="<<mean(x);
	
	return 0;
}
