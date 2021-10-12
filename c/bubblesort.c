#include<stdio.h>
void bubblesort_pointer(int*,int );
void swap(int*,int*);
int main()
{
    int i,j,*ptr;
    int arr[]={5,4,3,6,8};
    ptr=arr;

    printf("Unsorted array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",*(ptr++));
    }
    printf("\n");
    
    bubblesort_pointer(arr,5);
    ptr=arr;
    printf("Sorted array is:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",*(ptr++));
    }
      
}
void bubblesort_pointer(int arr[],int n)
{
    int *ptr;
    ptr=arr;
    int i,j;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                swap(ptr+j,ptr+j+1);
            }
        }
    }
}
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    // *a=*a+*b;
    // *b=*a-*b;
    // *a=*a-*b;
}