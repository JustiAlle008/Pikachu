#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0,flag=0;
	cout<<"Enter the number:";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"number is not a prime number"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<n<<"Is a prime number "<<endl;
	return 0;
}
