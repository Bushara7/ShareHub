//Write a program to reverse a number (e.g., 123 becomes 321).
/*#include<stdio.h>
int main(){
int a = 123;
int b = 321;
int swap;
swap=a;
a= b;
swap = b;
printf("The value of a is %d",a);
    return 0;
}*/
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;            // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;                  // Remove last digit
    }

    // Output result
    printf("Reversed number: %d\n", reversed);

    return 0;
}