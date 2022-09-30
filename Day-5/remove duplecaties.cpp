#include<iostream>
using namespace std;
int main()
{
	int flag=1;
	int n,i,j,a[10],b[10],k,l=0;
	cout<<"enter the n value: ";
	cin>>n;
	if(n>0)
	{
	cout<<"enter the elements \n";
	for(k=0;k<n;k++)
	{
		cin>>a[k];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
	    } 
		if(j==l)
		{
			b[l]=a[i];
			l++;
		}
	}
	cout<<"elements after remove the duplicates\n";
	for(i=0;i<l;i++)
	{
		cout<<b[i]<<" ";
	}
}
}
