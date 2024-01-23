
#include <stdio.h>
#include "NumClass.h"

int main() 
{
   int num1,num2; 

   //swap
   if(num1>num2)
   {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }
   
   //Enter 2 positive number
   scanf("%d %d",&num1,&num2);


   //check Armstrong number
    printf("the Armstrong number are: ")
   int i;
   for(i=num1; i<num2; i++)
   {
      if(isArmstrong(i));
      printf("$d",i);
   }

   //check Palindrome number
   printf("the Palindrome number are: ")
   int i;
   for(i=num1; i<num2; i++)
   {
      if(isPalindrome(i));
      printf("$d",i);
   }

   //check Prime number
   printf("The Prime numbers are: ")
   int i;
   for(i=num1; i<num2; i++)
   {
      if(isPrime(i));
      printf("$d",i);
   }

   //check Strong number
   printf("the Strong number are: ")
   int i;
   for(i=num1; i<num2; i++)
   {
      if(isStrong(i));
      printf("$d",i);
   }

}
