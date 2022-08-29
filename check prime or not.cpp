#include<iostream>
using namespace std;
int main(){
	int num,m,i,flag=0;
	cout<<"enter the number:";
	cin>>num;
	m=num/2;
	for(i=2;i<=m;i++)
	{
		if(num%i==0)
		{
			cout<<"number is not a prime";
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"given number prime";
	}
}
