#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10];
	char b[10];
	cout<<"enter the user name: ";
	gets(a);
	cout<<"reenter the user name: ";
	gets(b);
	if(strcmp(a,b))
	{
		cout<<"user name is valid";
	}
	else
	{
		cout<<"user name is not valid";
	}
}
