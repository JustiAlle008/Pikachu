#include<iostream>
using namespace std;
int main()
{
	int n,num=0;
	long factorial=1.0;
	cout<<"enter ";
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		factorial*=i;
		if(n%i==0)
		{
			num++;
		}
	}
	cout<<"factorial of "<<n<<"= "<<factorial;
	cout<<"\nfactor= "<<num;
}
