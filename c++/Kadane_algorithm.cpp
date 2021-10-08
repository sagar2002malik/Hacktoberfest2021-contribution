#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
#define ll long long
#define fi(i,m,n) for(int i=m;i<n;i++)
#define fj(i,m,n) for(int i=m;i>=n;i--)
#define test int tt;cin>>tt;while(tt-->0)
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vll>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mll map<ll,ll>
#define mvll map<vll,ll>
#define mstr map<string,ll>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define mod 1000000007
#define str string
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define eb emplace_back
#define vstr vector<string>
using namespace std;

class Solution {
public:
    long long maxSubarraySum(int arr[], int n) {
        long long max_No = INT_MIN, sum = 0;
        for (long long i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (max_No < sum)
                max_No = sum;

            if (sum < 0)
                sum = 0;
        }
        return max_No;
    }
};
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}