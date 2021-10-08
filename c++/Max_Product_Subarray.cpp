#include <bits/stdc++.h>

using namespace std;

	long long maxProduct(int *arr, int n) {
	    // code here
	        if(n==0)
            return 0;
    
    if(n==1)
    return arr[0];
    
   long long int ans=arr[0],c1,c2,max_p=arr[0],min_p=arr[0];
    for(long long int i=1;i<n;i++)
    {
        c1=max_p*arr[i];
        c2=min_p*arr[i];
        max_p=max((long long int)arr[i],max(c1,c2));
        min_p=min((long long int)arr[i],min(c1,c2));
        ans=max(ans,max_p);
    }
    return ans;
	}




int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
      
        int ans = maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  