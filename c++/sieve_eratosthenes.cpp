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

const int N = 100000;
int isPrime[N];
void sieve_eratosthenes(int n){
    for (int i = 2; i <= n; i++){
        if(isPrime[i]==0){
            for (int j = i*i; j <= n; j+=i){
                isPrime[j] = 1;
            } 
        }
    }
    for (int i = 2; i <=n; i++){
       if(isPrime[i]==0){
           cout << i << " ";
       }
    }
    cout << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    // cin.ignore(); must be there when using getline(cin, s)
    while(T--){
        int n;
        cin>>n;
        sieve_eratosthenes(n);
    }
    return 0;
}