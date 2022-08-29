#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cout<<"enter the password:";
	cin>>a;
	cout<<"reenter the password: ";
	cin>>b;
	if(a==b)
	{
		cout<<"password is valid";
	}
	else{
		cout<<"password is invalid";
	}
}
