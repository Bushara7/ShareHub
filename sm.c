#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int num;
    long long sum = 0;

    // Ask user for file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read numbers and compute sum
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
    }

    fclose(fp);

    printf("Sum of numbers = %lld\n", sum);

    return 0;
}