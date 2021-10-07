import java.util.*;
class Aniruddha775_Factorial{  
    public static void main(String args[]){  
        Scanner in= new Scanner(System.in);
     int i,fact=1;  
     System.out.println("Enter a number");
     int n= in.nextInt(); 
     for(i=1;i<=n;i++){    
         fact=fact*i;    
     }    
     System.out.println("Factorial of "+n+" is: "+fact);    
    }  
   }  
