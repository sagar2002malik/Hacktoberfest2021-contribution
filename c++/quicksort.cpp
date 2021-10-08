//Quicksort in C++
#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
         *a=*b;
         *b=temp;
}
int partition(int a[],int l,int r)
{
    int p=a[r];
    int i=l-1,j;
    for(j=l;j<=r-1;j++)
    {
        if(a[j]<=p)
        {
            i++;
           swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return i+1;
}
void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int index=partition(a,l,r);
                  quicksort(a,l,index-1);
                  quicksort(a,index+1,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

/*INPUT
9
1 8 3 5 4 1 10 21 3

OUTPUT
1 1 3 3 4 5 8 10 21 

TIME COMPLEXITY OF THE CODE
O(nlog(n))
where n is size of array 
*/
