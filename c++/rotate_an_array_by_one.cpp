
// Rotate an array by one
#include <iostream>
#include <stdio.h>
using namespace std;

void rotate(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }

    int t, x;

    t = arr[0];
    arr[0] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        x = arr[i];
        arr[i] = t;
        t = x;
    }
    return;
}

// Driver code
int main()
{
    int num;
    cout << "Enter the number of elements: \n";
    cin >> num;
    int arr[num]; //create an array with given number of elements
    cout << "Enter elements:" << endl;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    rotate(arr, n);
    cout << "Array rotated by one is: \n ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    
}

