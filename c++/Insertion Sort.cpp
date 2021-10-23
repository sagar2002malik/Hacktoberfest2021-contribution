#include <iostream>
#include <climits>

using namespace std;


void insertion_sort (int arr[], int n)
{
    
    // put index 1 to index n-1 in correct place in sorted array
    
    for (int itr = 1; itr <= n-1; itr++) 
    
    {
        
        // my current key or element e is arr[i]
        
        int e = arr[itr];
        
        // we will place the key or current element in the 'right' position in sorted part
        
        int j = itr-1; 
        
        while (j>=0 && arr[j] > e)   
        {
            
            arr[j+1] = arr[j];  // swap to next position
            j = j-1;            // j--
            
        }
        
        arr[j+1] = e;         // j shifts i-1 toh ek j piche islea j+1 pr change
        
    }
    
    
    
    
    
}



int main()
{
    
    
    // Insertion Sort
    // Insert the current element in 'right' position
    
    int num, key;
    
    cout << "Enter the number of elements in array: ";
    cin >> num;    // taking the no of elements in array
    
    int a[1000]; // max constraint size
    
     // taking input from user the elements
    for (int i = 0; i < num; i++)
    {
        
        cin >> a[i];
        
    }
    
    insertion_sort(a,num);
    
    for (int i =0; i<num; i++)
    {
        
        cout << a[i] << " , ";
        
    }
    
    return 0;
}
