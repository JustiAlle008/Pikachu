#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],sum[10][10],r,c,i,j;
	cout<<"enter the no of rows:";
	cin>>r;
	cout<<"enter the no of columns";
	cin>>c;
	cout<<"enter the first martix\n";
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the second martix\n";
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			cin>>b[i][j];
		}
	}
	cout<<"sum of matrix\n";
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<"\n";
	}
	

}
