#include<iostream>
using namespace std;
int main()
{
	int y,c;
	char g;
	cout<<"Enter your gender  (m/f):: ";
	cin>>g;
	cout<<"Enter years of srevices :: ";
	cin>>y;
	cout<<"1)post graduate.\n";
	cout<<"2)graduate.\n";
	cout<<"Choose one of the above choice (1/2):: ";
	cin>>c;
	if(g=='m' || g=='M')
	{
		if(y>=10)
		{
			if(c=='1')
			{
				cout<<"your salary amount is 15,000.";
			}
			else
			{
				cout<<"your salary amount is 10,000.";
			}
		}
		else
		{
			if(c=='1')
			{
				cout<<"your salary amount is 10,000.";
			}
			else
			{
				cout<<"your salary amount is 7,000.";
			}	
		}
		
	}
	if(g=='f' || g=='F')
	{
		if(y>=10)
		{
			if(c=='1')
			{
				cout<<"your salary amount is 12,000.";
			}
			else
			{
				cout<<"your salary amount is 9,000.";
			}
		}
		else
		{
			if(c=='1')
			{
				cout<<"your salary amount is 10,000.";
			}
			else
			{
				cout<<"your salary amount is 6,000.";
			}	
		}
		
	}
	return 0;
	
}
