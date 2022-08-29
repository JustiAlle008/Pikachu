#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char name[50],temp;
	int i,j=1;
	cout<<"enter the string: ";
	cin>>name;
	j=strlen(name)-1;
	cout<<j;
	for(i=0;i<j;i++,j--)
	{
		temp=name[i];
		name[i]=name[j];
		name[j]=temp;
	}
	cout<<"the reverse string is "<<name;
}
