#include<bits/stdc++.h>
using namespace std;

void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}

void selection_sort(int arr[], int n)
{
    int min_idx;
    for (int i=0;i<n-1;i++)
    {
        min_idx = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main()
{
    int arr[1000], n;
    cout<<"\nEnter the Number of elements : ";
    cin>>n;
    cout<<"\nEnter the Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr, n);
    cout<<"\nArray after selection sort : [ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}
