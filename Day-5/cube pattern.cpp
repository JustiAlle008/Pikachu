#include<iostream>
using namespace std;
int main()
{
	int cube[10],n=10,i=0,j,temp,h=1;
    while(i<=n)
    {
        temp=i*i*i;
        cube[i]=temp;
        i++;
    }
    
    for(i=0;i<4;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		cout<<cube[h]<<" ";
    		h++;
		}
		cout<<"\n";
	}
	
}
