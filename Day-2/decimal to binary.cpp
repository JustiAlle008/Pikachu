#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,flag=0;
	cout<<"enter the number:";
	cin>>n;
	if(n>0)
	{
		flag=1;
	}
	if(flag==1)
	{
	   for(i=0;n>0;i++)
	   {
	    	a[i]=n%2;
		    n=n/2;
	   }
	   for(i=i-1;i>=0;i--)
	   {
	    	cout<<a[i];
	   }
    }
    else
    {
    	cout<<"enter only positive numbers";
	}
}
