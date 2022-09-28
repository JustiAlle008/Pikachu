#include<iostream>
using namespace std;
class mark{
	char name[50];
	int roll_no;
	char grade;
	public:
		void getdata();
		void putdata();
};
void mark::getdata(){
	cout<<"enter the student name: ";
	cin>>name;
	cout<<"enter the roll no: ";
	cin>>roll_no;
	cout<<"enter the Grade: ";
	cin>>grade;
}
void mark::putdata(){
	cout<<"\nstudent name is "<<name;
	cout<<"\nroll no is "<<roll_no;
	cout<<"\ngrade= "<<grade;
	cout<<"\n\n";
	
}
int main()
{
	mark o[10];
	int n,i,j;
	cout<<"enter the total no of student: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		o[i].getdata();
	}
	for(j=0;j<n;j++)
	{
		o[j].putdata();
	}
}
