import java.util.*;

class Aniruddha775_EvenOdd
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int a;
		System.out.println("Enter the limit");
		a = sc.nextInt();
		int N[]= new int[a];
		System.out.println("Enter the numbers");
		for(int i=0; i<a; i++){
		    N[i]= sc.nextInt();
		}
		for(int i=0; i<a; i++){
		    if(N[i]%2==0){
		        System.out.println("EVEN");
		    }
		    else{
		        System.out.println("ODD");
		    }
		}
	}
}
