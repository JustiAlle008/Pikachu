#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10];
	string b;
	int j;
	cout<<"enter the string: ";
	cin>>a;
	j=strlen(a);
	for(int i=j-1;i>=0;i--)
	{
		b+=a[i];
	}
	if(a==b)
	{
		cout<<"given string palindrome";
	}
	else
	{
		cout<<"given string not a palindrome";
	}
}
