package arrayProblems;

public class BubbleSot {

	public static void main(String[] args) {
		
		int arr[] = {1,5,30,10};
		int temp=0;
		
		for(int j=0;j<arr.length;j++) {
			for(int i =0;i<arr.length-1;i++) {
				if(arr[i+1]<arr[i]) {
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
					
					
				}
			}

		}
		
		for(int k=0;k<arr.length;k++) {
			System.out.println(arr[k]+" ");
		}
	}

}
