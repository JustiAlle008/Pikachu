#include<bits/stdc++.h>
using namespace std;    
int main()
{
  int n,n1,l;
  int max;
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
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  max=arr[n-n1];
  
  cout<<"\nM th Maximum number is "<<max;
  
  
  
  return 0;
}
