// Maximum sum of a subarray of size k in O(n) Time Complexity.

#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n,int k)
{ 
  if(n<k)
  {
    cout<<"Not Valid";
    return(-1);
  }
  
  //Find sum of first window of size k
   int sum=0;
  for(int i=0;i<k;i++)
    sum=sum+arr[i];
  //Find sum of remaining windows by removing first element of previous window and adding last element of current window.
  int curr_sum=sum;
  for(int i=k;i<n;i++)
  {
     curr_sum += arr[i] - arr[i-k];
       sum = max(sum, curr_sum);
  }
  return(sum);
}
int main()
{
  int n,k;  //size of array,size of subarray
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<< maxSum(arr,n,k);
  return 0;
}
  
