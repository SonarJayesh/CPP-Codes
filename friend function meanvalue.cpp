#include<iostream>
using namespace std;
class sample
{
	int a,b;
	 public:
	 	void setvalue(){
	 		a=10;
	 		b=20;
	 		
		 }
		 friend float mean(sample s);
		 
	
};
float mean(sample s)
{
	return float (s.a+s.b);
	
}
int main()
{
	sample x;
	x.setvalue();
	cout<<"mean value="<<mean(x);
	
}
