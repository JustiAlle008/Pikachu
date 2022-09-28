#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	cout<<"enter the no of rows did you what=>";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
