#include<iostream>
using namespace std;
#include<math.h>
int setbits(int n ){
    int ans = 0;
    while(n>0){
        ans++;
        n = n>>1;
    }
    return ans;
}
int main(){
        int t;
        cin>>t;
        while(t--){
            int N;
            cin>>N; //n natural integer in question
            int n = setbits(N);
            int ans1 = N -pow(2, n-1) + 1;
            int ans2 = pow(2,n-1)- pow(2,n-2);
            if(ans1 > ans2){
                cout<<ans1<<endl;
            }
            else
            cout<<ans2<<endl;
        }

	return 0;
}
