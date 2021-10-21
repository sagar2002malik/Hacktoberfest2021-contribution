package arrayProblems;

public class ArayRotation {

	public static void main(String[] args) {
		
       int a[] = {1,2,3,4,5,6,7};
       int n = a.length;
       int d = 5;
		rotation(a,n,d);
	}
    
	
	public static void rotation(int arr[],int n,int d) {
		
		for(int i=0;i<d;i++) {
			rotateByOne(arr);
		}
		for(int s=0;s<n;s++) {
			System.out.print(arr[s]+" ");
		}
	}
	
	public static void rotateByOne(int []ar) {
		int t = ar.length;
		int k=0,m=t-1;
		while(k != m) {
			int temp = ar[k];
			ar[k] = ar[m];
			ar[m] = temp;
			k++;
		}
	   
