// recursive code for tower of hanoi 
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void hanoi(int x,char a,char b,char c)
{
    if(x>0)
    {
        hanoi(x-1,a,c,b);
        cout<<"Move a disc from "<<a<<" to "<<c<<"\n";
        hanoi(x-1,b,a,c);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;//Enter the number of discs
    hanoi(n,'A','B','C');//Call the function
    return 0;
}

/*INPUT
3 

OUTPUT
Move a disc from A to C
Move a disc from A to B
Move a disc from C to B
Move a disc from A to C
Move a disc from B to A
Move a disc from B to C
Move a disc from A to C

TIME COMPLEXITY of the Program 
O(2^n)

*/
