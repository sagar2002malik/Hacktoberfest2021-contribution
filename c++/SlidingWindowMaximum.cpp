//By SakhinetiPraveena
//Sliding window maximum
//Given an array and sliding window length,  code to output the maximum number for each window in O(n) complexity using deque.
//EXAMPLE: array [1 3 -1 -3 5 3 6 7] and window length 3 , output should be [3, 3, 5, 5, 6, 7]
#include<bits/stdc++.h>
using namespace std;

vector<int> slidingMaximum(int A[], int B,int n) {
    deque<int> dq;  //Using deque where both front and back of a queue can be accessed
    int i;
    for(i=0;i<B;i++){
        while(!dq.empty() && A[i]>=A[dq.back()]) dq.pop_back();  //indices of elements of first window are added to the deque
        dq.push_back(i);
    }
    vector<int> ans;
    for(i=0;i<n;i++){
        ans.push_back(A[dq.front()]);                             //Highest element in the window is accessed at front of dequeue
        while(!dq.empty() && dq.front()<=i-B) dq.pop_front();     //Deleting indices in dequeue that wot exist in next window
        while(!dq.empty() && A[i]>=A[dq.back()]) dq.pop_back();   //Inserting elements that greater than back of dequeue
        dq.push_back(i);
    }
    ans.push_back(A[dq.front()]);
    return ans;
}

int main(){
    int n;
    cout<<"Enter number of elements of array :";
    cin>>n;
    cout<<"Enter elements of the array :";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter window size : ";
    cin>>k;
    vector<int> ans=slidingMaximum(arr,k,n);
  //Printing the array of sliding window maximum
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
