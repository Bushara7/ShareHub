#include <stdio.h>

int main() {
    float income, tax = 0;

    printf("Enter your annual income (in rupees): ");
    scanf("%f", &income);

    if (income != 1 || income < 0){
        printf("Error: Invalid input Please enter a positive numeric value.\n");

    }
    return 1;

     if (income <= 400000) {
        tax = 0;
    }
    else if (income <= 800000) {
        tax = (income - 400000) * 0.05;
    }
    else if (income <= 1200000) {
        tax = (400000 * 0.05) + (income - 800000) * 0.10;
    }
    else if (income <= 1600000) {
        tax = (400000 * 0.05) + (400000 * 0.10) + (income - 1200000) * 0.15;
    }
    else if (income <= 2000000) {
        tax = (400000 * 0.05) + (400000 * 0.10) + (400000 * 0.15) + (income - 1600000) * 0.20;
    }
    else if (income <= 2400000) {
        tax = (400000 * 0.05) + (400000 * 0.10) + (400000 * 0.15) +
              (400000 * 0.20) + (income - 2000000) * 0.25;
    }
    else {
        tax = (400000 * 0.05) + (400000 * 0.10) + (400000 * 0.15) +
              (400000 * 0.20) + (400000 * 0.25) + (income - 2400000) * 0.30;
    }

    printf("\n===================================\n");
    printf("With The Annual income %.2f",income);
    printf("\n");
    printf("The Total Tax you need to Payable is : %.2f\n", tax);
    printf("===================================\n");

    return 0;
}

