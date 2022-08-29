#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age: ";
	cin>>age;
	if(age<18)
	{
		cout<<"not eligible to vote!,you have "<<18-age<<" to vote";
	}
	else{
		cout<<"your are eligible to vote";
	}
}
