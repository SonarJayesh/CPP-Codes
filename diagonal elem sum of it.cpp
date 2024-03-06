#include<iostream>
using namespace std;
int main()
{
	int a[2][2],i,j,sumleft=0;
	cout<<"Enter the array Element\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n it's Diagonal element is:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==j)
			{
				sumleft=a[i][j];
			}
		}
		cout<<sumleft<<"\n";
	}

cout<<"\n sum of diagonal element is:\n";
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		if(i==j)
		{
			sumleft =+a[i][j];
		}
		
	}
	cout<<sumleft<<"\n";
}
return 0;
}
