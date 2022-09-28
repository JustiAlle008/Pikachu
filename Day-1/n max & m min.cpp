#include<bits/stdc++.h>
using namespace std;    
int main()
{
  int n,m,n1,l;
  int max,min;
  cout<<"Enter number of elements you want to take in array: ";
  cin>>n;
  cout<<"\nEnter array elements:\n";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"enter the value for n: ";
  cin>>n1;
  cout<<"enter the valur for m: ";
  cin>>m;
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  max=arr[n-m];
  min=arr[n1-1];
  cout<<"\nM th Maximum number is "<<max;
  cout<<"\nN th Minimum number is "<<min;
  
  cout<<"Sum = "<<max+min;
  cout<<"Difference = "<<max-min;
  
  return 0;
}
