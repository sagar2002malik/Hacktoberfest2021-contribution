// Problem Statement -
// You are given a number n . Print the below pattern for input n

/*

Sample Input : n=7

*  *  *  *  *  *  *  
   *  *  *  *  *  
      *  *  *  
         *  
      *  *  *  
   *  *  *  *  *  
*  *  *  *  *  *  *  

n=3

*  *  *  
   *  
*  *  *  

*/


#include<stdio.h>

int main(int argc, char const *argv[])
{
	 
	int n;
   scanf("%d",&n);
   
   int stars=n;
   int spaces=0;
    
   for(int i=1;i<=n;i++){

     for(int j=1;j<=spaces;j++){
         printf("   ");
     }

     for(int j=1;j<=stars;j++){
         printf("*  ");
     }

     if(i<=n/2){
         stars-=2;
         spaces+=1;
     }else{
         spaces-=1;
         stars+=2;
     }
    
    printf("\n");

   }


	return 0;
}
