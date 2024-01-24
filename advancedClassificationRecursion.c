#include <stdio.h>

// Function to calculate power
int power(int numberD, int digit) {
    int i, sum = 1;
    for (i = 0; i < numberD; i++) {
        sum = sum * digit;
    }
    return sum;
}

// Function to count digits using recursion
int countDigits(int a) {
    if (a == 0) {
        return 0;
    } else {
        return 1 + countDigits(a / 10);
    }
}

// Recursive function to check if a number is an Armstrong number
int isArmstrongRecursive(int a, int originalA, int numDigits) {
    if (a == 0) {
        return (originalA == 0);
    } else {
        int digit = a % 10;
        int poweredDigit = power(numDigits, digit); // Fix: Corrected the order of arguments
        return poweredDigit + isArmstrongRecursive(a / 10, originalA - poweredDigit, numDigits);
    }
}

// Recursive function to check if a number is a palindrome
int isPalindromeHelper(int num, int original) { // Fix: Added 'original' as an argument
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return (original == reverse);
}

// Function to check if a number is an Armstrong number
int isArmstrong(int a) {
    int numDigits = countDigits(a);
    return (isArmstrongRecursive(a, a, numDigits) == a);
}

// Function to check if a number is a palindrome
int isPalindrome(int a) {
    if (a < 0)
        return 0;  // Negative numbers are not palindromes

    return isPalindromeHelper(a, a); // Fix: Added 'a' as an argument
}
/*
int isArmstrong(int num){
    int size = 0, cNum = num;
    while(cNum > 0){ 
        size++;
        cNum = cNum/10;    
    }
    if(isArmstrongHelper(num, size) == num){ return TRUE; }
    return FALSE;
}
int isArmstrongHelper(int num, int size){
    if(num < 10){ return pow(num,size); }
    return pow(num%10,size) + isArmstrongHelper(num/10,size);
}
*/
