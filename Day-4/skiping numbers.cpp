#include<iostream>
using namespace std;
int main()
{
	int m,n,k,i;
	cout<<"Enter the minimum number :: ";
	cin>>m;
	cout<<"Enter the maximum number  :: ";
	cin>>n;
	cout<<"Enter the noof numbers you want to skip :: ";
	cin>>k;
	cout<<m<<" "<<m+1<<" "<<m+2<<" ";
	for(i=m+k+3;i<=n;i++)
	{
		cout<<i<<" ";
	}
	return 0;
}
