#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
   int n,x;
   cin>>n;
   int c[3]={0};
   for(int i=0;i<n;i++)
   {
       cin>>x;
       c[x]++;
   }
   for(int i=0;i<3;i++)
   {
       for(int j=1;j<=c[i];j++)
       {
           cout<<i<<" ";
       }
   }
   return 0;
}
/*INPUT
9
1 0 2 1 0 2 1 1 1 

OUTPUT
0 0 1 1 1 1 1 2 2

TIME COMPLEXITY OF THE CODE
O(n)
where n is size of array 
*/
