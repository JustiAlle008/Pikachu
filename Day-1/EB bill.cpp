#include<iostream>
using namespace std;
	class eb
	{
		public:
			int cn;
			char name[20];
			int preading;
			int creading;
			char type;
			int prize;
			
			int domestic(int preading,int creading)
			{
				int reading=creading-preading;
				if(reading<=100)
				{
					prize=reading*1;
					return prize;
				}
				else if(reading>=101 && reading<=200)
				{
					prize=reading*2.5;
					return prize;
				}
				else if(reading>=201 && reading<=500)
				{
					prize=reading*4;
					return prize;
				}
				else
				{
					prize=reading*6;
					return prize;
				}
			}
			
			int commerical(int preading,int creading)
			{
				int reading=creading-preading;
				if(reading<=100)
				{
					prize=reading*2;
					return prize;
				}
				else if(reading>=101 && reading<=200)
				{
					prize=reading*4.5;
					return prize;
				}
				else if(reading>=201 && reading<=500)
				{
					prize=reading*6;
					return prize;
				}
				else
				{
					prize=reading*7;
					return prize;
				}
			}
	};
	
int main()
{
	eb o1;
	cout<<"Enter the previous EB reading ";
	cin>>o1.preading;
	cout<<"Enter the current EB reading ";
	cin>>o1.creading;
	cout<<"Enter the Type Of EB connection";
	cin>>o1.type;
	if(o1.type=='d')
	{
	    cout<<"your eb bill is "<<o1.domestic(o1.preading,o1.creading);
	}
	else if(o1.type='c')
	{
		cout<<"your eb bill is "<<o1.commerical(o1.preading,o1.creading);
		
	}
	else
	{
		cout<<"enter only d or c";
	}
}
