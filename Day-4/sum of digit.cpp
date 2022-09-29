#include<iostream>
using namespace std;
int main()
{
	int n,n1,num=0;
	cout<<"enter the number: ";
	cin>>n;
	n1=n;
	while(n!=0)
	{
		n=n/10;
		num++;
	}
	cout<<"the number of digit: "<<num;
}
