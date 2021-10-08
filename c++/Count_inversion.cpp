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

int merge(int arr[], int l, int m, int r)
{
	int inv = 0;
	int a[m - l + 1]; int b[r - m];
	for (int i = 0; i < m - l + 1; i++) {
		a[i] = arr[l + i];
	}
	for (int i = 0; i < r - m; i++) {
		b[i] = arr[m + 1 + i];
	}
	int i = 0, j = 0, k = l;
	while (i < m - l + 1 && j < r - m) {
		if (a[i] > b[j]) {
			arr[k] = b[j];
			j++; k++;
			inv += m - l + 1 - i;
		}
		else {
			arr[k] = a[i];
			i++; k++;
		}
	}
	while (i < m - l + 1) {
		arr[k] = a[i];
		i++; k++;
	}
	while (j < r - m) {
		arr[k] = b[j];
		j++; k++;
	}
	return inv;
}

int mergeSort(int arr[], int l, int r)
{
	int inv = 0;
	if (l < r) {
		int mid = (l + r) / 2;
		inv += mergeSort(arr, l, mid);
		inv += mergeSort(arr, mid + 1, r);
		inv += merge(arr, l, mid, r);
	}
	return inv;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	fi(i, 0, n) {
		cin >> arr[i];
	}
	cout << mergeSort(arr, 0, n - 1);
	return 0;
}