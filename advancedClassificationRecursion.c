#include <stdio.h>

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/

int isArmstrong(int a) {
    int numDigits = countDigits(a);
    return (isArmstrongRecursive(a, a, numDigits) == a);
}

/* will return if a number is a palindrome */
int isPalindrome(int a)
{
  
}

// my function

int pow(int numberD,int digit)
{
    int i,sum = 1;
    for(i=0;i<numberD;i++)
    {
        sum = sum*digit;
    }
    return sum;
}

int countDigits(int a) {
    if (a == 0) {
        return 0;
    } else {
        return 1 + countDigits(a / 10);
    }
}

int isArmstrongRecursive(int a, int originalA, int numDigits) {
    if (a == 0) {
        return (originalA == 0);
    } else {
        int digit = a % 10;
        int poweredDigit = pow(digit, numDigits);
        return poweredDigit + isArmstrongRecursive(a / 10, originalA - poweredDigit, numDigits);
    }
}
