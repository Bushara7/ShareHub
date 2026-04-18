#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 0;

    // Ask user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for easy comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    // Display result
    printf("Number of vowels in the string: %d\n", count);

    return 0;
}