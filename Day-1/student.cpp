#include<iostream>
using namespace std;
class student{
	char name[50];
	int roll_no;
	int total;
	public:
		void getdata();
		void putdata();
		void getgrade();
};
void student::getdata(){
	cout<<"enter the name: ";
	cin>>name;
	cout<<"enter the roll no: ";
	cin>>roll_no;
	cout<<"enter the total mark out of 500 : ";
	cin>>total;
}
void student::putdata(){
	cout<<"your name is "<<name<<"\n";
	cout<<"your roll no is "<<roll_no<<"\n";
	cout<<"your total mark is "<<total<<"\n";
}
void student::getgrade()
{
	float per;
	per=(float)total*500.00/100.00;
	if(per>=75){
		cout<<"Grade A\n\n";
	}
	else if(per<75 && per>=60)
	{
		cout<<"Grade B\n\n";
	}
	else if(per<60 && per>=40)
	{
		cout<<"Grade C\n";
	}
	else if(per<40 && per>=35)
	{
		cout<<"Grade D\n\n";
	}
	else
	{
		cout<<"fail";
	}
}

int main()
{
	int i,j,n;
	student od[10];
	cout<<"enter the no of student ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nenter the student details of "<<i+1<<"\n";
		od[i].getdata();
	}
	for (j=0;j<n;j++)
	{
		od[j].putdata();
		od[j].getgrade();
	}
}

