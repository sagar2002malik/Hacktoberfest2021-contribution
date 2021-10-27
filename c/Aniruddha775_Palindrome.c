//Palindrome is a number that is when the integer is reversed.  For eg : take 15451 , The number is same when it is read foward and backward. 
//Program to check whther it is a palindrome or not !

#include <stdio.h>
void palindrome (int);
int main()
{
    int a;
    char ch;
    do
	{
    printf("Enter the number you want to check to be a palindrome \n");
    scanf("%d", &a);
    palindrome(a);
    printf("Want to try more Y/N \n");
    scanf("%s",&ch);
    }
    while(ch=='Y');
    return 0;
}
void palindrome(int num)
{ int remainder,result=0, x=num ;
  while (num>0)
  { 
   remainder=num%10;
   result=result*10+remainder;
   num=num/10; 

  } 
 if (result==x)
  printf("True \n");
	
	
	else 
	 printf("False \n");
	
}
//Output 
// Enter the number you want to check to be a palindrome 
// 15451
// True
//Want to try Y/N



