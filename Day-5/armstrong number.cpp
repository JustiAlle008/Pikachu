#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev=0,org;
	cout<<"Enter the number :: ";
	cin>>n;
	n=org;
	while(n!=0)
	{
		rem=n%10;
		rev=rem*rem*rem+rev;
		n=n/10;
	}
	if(rev==org)
	{
		cout<<"This number is a Armstrong number.. ";
	}
	else
	{
		cout<<"This is not a Armstrong.. ";
	}
	return 0;
	
}
