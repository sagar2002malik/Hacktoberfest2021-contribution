#include <iostream>
#include <climits>

using namespace std;


void selection_sort (int a[], int n)
{
    
    for (int i=0; i<n-1; i++)  
    {
        // find out the smallest element index in ursorted array
        
        int min_index = i;  // to keep a track in unsorted array
        
        for (int j=i; j<n; j++)  // ye loop poora chlega end tak
        {
            
            if (a[j] < a[min_index] ) // swapping is expensive so I will update it
            {
                
                min_index = j;   // updating the min index here
                
            }
            
        }
        
        swap(a[i], a[min_index]);
        
    }
    
}



int main()
{
    
    
    // Selection Sort
    // arrange a randomly shuffled array in increasing/decreasing order
    
    int num, key;
    
    cout << "Enter the number of elements in array: ";
    cin >> num;    // taking the no of elements in array
    
    int a[1000]; // max constraint size
    
     // taking input from user the elements
    for (int i = 0; i < num; i++)
    {
        
        cin >> a[i];
        
    }
    
    selection_sort(a,num);
    
    for (int i =0; i<num; i++)
    {
        
        cout << a[i] << " , ";
        
    }
    
    
    
    
    
    return 0;
}
