#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int maxSubArray(vector<int> nums) {
     int n=nums.size();
     int max=0;
     int curr=0;
        for(int i=0;i<n;i++){
            curr=curr+nums[i];
            if(curr>max){
                max=curr;
            }
            if(curr<0){
                curr=0;
            }
        }
        if(max>0){
        return max;
        }else {
            return *max_element(nums.begin(),nums.end());
        }
}
int main(){
    int a;
    cout<<"Enter the size if the array : ";
    cin>>a;
    vector<int> x;
    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" element of the array";
        cin>>x[i];
    }
    cout<<maxSubArray(x)<<endl;
}
