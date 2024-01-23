
#include <stdio.h>


/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int a)
{
    int num = a;
    int numberD = numberD(a);
    
    int d =0,sum =0,ans = num;
    while(num>0)
    {
        d = num%10;
        sum = sum + pow(numberD,d);
        num = num/10;
    }
    return (ans == sum);

}

/* will return if a number is a palindrome */
int isPalindrome(int a)
{
    int  numberD = numberD(a);

    if(numberD==1)
    return 1;

    int temp = a;
    int reverse = 0;

    while (temp > 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    return (a == reverse);
}

// my function 

int numberD(int a)
{
    int numberD = 0;
  while(a>0)
    {
        numberD++;
        a= a/10;
    } 
    return numberD; 
}
int pow(int numberD,int digit)
{
    int i,sum = 1;
    for(i=0;i<numberD;i++)
    {
        sum = sum*digit;
    }
    return sum;
}
