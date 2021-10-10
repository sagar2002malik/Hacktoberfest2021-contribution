#include<stdio.h>
 
 
void merge(int a[],int lb,int mid,int ub)
{
	int i,j,k,b[ub+1];
	i=lb;
	j=mid+1;
	k=lb;
	
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;k++;
		}
	}
	
	for(i=lb;i<ub+1;i++)
	{
		a[i]=b[i];
	}
}

void mergesort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		
		mergesort(a,lb,mid);
	    mergesort(a,mid+1,ub);
	    merge(a,lb,mid,ub);
	}
	 
}
int main()
{
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
    int a[n];
	printf("\nEnter the element of array:");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   
	mergesort(a,0,n-1);
	
	printf("\nThe sorted array by merge sort is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
}
