#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
		   cout<<i<<" ";
	    }
	    cout<<"\n";
	}
	for(i=3;i!=0;i--)
	{
		for(j=0;j<i;j++)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}
