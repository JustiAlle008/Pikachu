#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int a=*x;
	int b=*y;
	cout<<"swaped number is ";
	cout<<"A= "<<*y<<"\nB= "<<*x;
}
int main()
{
	int a;
	int b;
	cout<<"enter the two value: ";
	cin>>a>>b;
	swap(&a,&b);
	cout<<"in main function "<<a<<b;          
}
