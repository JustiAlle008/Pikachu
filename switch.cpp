#include<iostream>
using namespace std;
int main(){
	int num,num1;
	char op;
	cout<<"enter the two number:";
	cin>>num>>num1;
	cout<<"enter the opertor:";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<num<<"+"<<num1<<"="<<num+num1;
			break;
		case'-':
			cout<<num<<"-"<<num1<<"="<<num-num1;
			break;
		case '*':
			cout<<num<<"*"<<num1<<"="<<num*num1;
			break;
		case '/':
			cout<<num<<"/"<<num1<<"="<<num/num1;
			break;
		case '%':
			cout<<num<<"%"<<num1<<"="<<num%num1;
			break;
		default:
			cout<<"Invalid Opertor";
	}
}
