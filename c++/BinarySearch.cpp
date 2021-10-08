#include<iostream>
using namespace std;
int BinarySearch(int a[], int n , int val)
{
  int l=0, r=n-1;
  while(l<=r)
  {
    int m=(l+r)/2;
    if(val==a[m])
      return m;
    else if(val<a[m])
      r=m-1;
    else 
      l=m+1;
  }
  return -1;
}
int main()
{
  int n;
  cout<<"Enter the size:";
  cin>>n;
  int arr[n];
  cout<<"Enter the sorted array:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int x;
  cout<<"Enter the value to search:";
  cin>>x;
  int res=BinarySearch(arr,n,x);
  if(res>0)
    cout<<"Element is fount at: "<<res;
  else
    cout<<"Element not found";
  return 0;
}
    
