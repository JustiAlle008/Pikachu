#include<iostream>
using namespace std;
int main()
{
	int n,a[50],num,c,b=0,i;
	cout<<"Enter the number:: ";
	cin>>num;
	cout<<"Enter the n value :: ";
	cin>>n;
	cout<<"The factors of the given integer are :: ";
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout<<i<<" ";
			b=b+1;
			if(b==n)
			{
				c=i;
			}
			
		}
	}
	cout<<"\n";
	cout<<"Noof factors of the given number : "<<b<<"\n";
	cout<<"The factor "<<n<<" numbered factor of the given number "<<num<<" is:: "<<c;
	return 0;
}
