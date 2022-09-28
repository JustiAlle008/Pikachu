#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;
int main()
{
	char name[50],temp;
	int i,j=1,flag=1;
	cout<<"enter the string: ";
	cin>>name;
	j=strlen(name)-1;
	for(i=0;i<j;i++,j--)
	{
		temp=name[i];
		name[i]=name[j];
		name[j]=temp;
		flag=0;
	}
	if(flag==0)
	{
	    cout<<"the reverse string is "<<name;
    }

}
