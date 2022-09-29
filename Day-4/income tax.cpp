#include<iostream>
using namespace std;
int main()
{
	int income;
	cout<<"Enter the Income: ";
	cin>>income;
	if(income<=150000 and income>0)
	{
		cout<<"No Tax";
	}
	else if(income>=150001 && income<=300000)
	{
		cout<<"Your Tax Is: "<<income*0.1;
	}
	else if(income>=300001 && income<=500000)
	{
		cout<<"Your Tax Is: "<<income*0.2;
	}
	else if(income>=500001)
	{
		cout<<"Your Tax Is: "<<income*0.3;
	}
	else
	{
		cout<<"Enter Valid Income";
	}
}
