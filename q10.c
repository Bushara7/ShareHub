#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read numbers from file and add them
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
    }

    fclose(file);

    // Display the sum
    printf("Sum of numbers in file = %d\n", sum);

    return 0;
}