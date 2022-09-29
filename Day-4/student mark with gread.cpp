#include<iostream>
using namespace std;
void det(int a,int b,int c,int d)
{
	int tot;
	float agg;
	tot=a+b+c+d;
	cout<<"Total of your subjects :: "<<tot<<"\n";
	agg=(tot/400)*100;
	cout<<"The aggregate you have gained is :: "<<agg<<"\n";
	if(agg>=75)
	{
		cout<<"You have passed in DISTINCTION ..";
	}
	else if(agg<75 && agg>=60)
	{
		cout<<"You have passed in FIRST DIVISION ..";
	}
	else if(agg<60 && agg>=50)
	{
		cout<<"You have passed in SECOND DIVISION ..";
	}
	else if(agg<50 && agg>=40)
	{
		cout<<"You have passed with third division..";
	}
	else if(agg<40 && agg>=0)
	{
		cout<<"You have failed ..Better luck next time ..";
	}
}
int main()
{
	int a,b,c,d;
	cout<<"Enter the 1 st sub marks out of 100 :: ";
	cin>>a;
	cout<<"Enter the 2 st sub marks out of 100 :: ";
	cin>>b;
	cout<<"Enter the 3 st sub marks out of 100 :: ";
	cin>>c;
	cout<<"Enter the 4 st sub marks out of 100 :: ";
	cin>>d;
	det(a,b,c,d);
	return 0;
}
