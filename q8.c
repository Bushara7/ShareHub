
#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Compare reversed with original
    if (original == reversed)
        return 1; // Palindrome
    else
        return 0; // Not palindrome
}

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call
    if (isPalindrome(number)){
        printf("%d is a palindrome.\n", number);
    }else{
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}