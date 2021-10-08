//sort an array containing 0's ,1's and 2's in O(n) complexity.

#include<bits/stdc++.h>
using namespace std;

void sort_array(int arr[], int n)
{
   int c0=0,c1=0,c2=0;    //counting the number of zeroes,ones and twos.
  for(int i=0;i<n;i++)
  {
     if(arr[i]==0)
       c0++;
    else if(arr[i]==1)
      c1++;
    else
      c2++;
  }
  int k=0;
  while(c0>0)
  {
    arr[k++]=0;
    c0--;
  }
  while(c1>0)
  {
    arr[k++]=1;
    c1--;
  }
  while(c2>0)
  {
    arr[k++]=2;
    c2--;
  }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
  int n; // size of an array
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  sort_array(arr,n);
  return 0;
}
