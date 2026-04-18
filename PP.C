

#include <stdio.h>   

int main() {
    float income, tax = 0;   

    
    printf("Enter your annual income (in rupees): ");
    scanf("%f", &income);   
    
    if (income <= 400000) { //₹0 – ₹4,00,000 → 0%
        tax = 0;   
    }
    else if (income>400000 && income <= 800000) { //₹4,00,001 – ₹8,00,000 → 5%
        tax =  0.05*(income - 400000);   
    }
    else if (income > 800000 && income <= 1200000) { //₹8,00,001 – ₹12,00,000 → 10%
        tax = 0.05*(800000- 400000) +0.1*(income-800000);
    }

    else if (income > 1200000 && income <= 1600000) { //₹12,00,001 – ₹16,00,000 → 15%
        tax = 0.05*(800000- 400000) +0.1*(1200000-800000)+ 0.15*(income - 1200000);   
    }
    else if (income >1600000 && income <= 2000000) { // ₹16,00,001 – ₹20,00,000 → 20%
        tax = 0.05*(800000- 400000) +0.1*(1200000-800000)+ 0.15*(1600000 - 1200000)+0.2*(income-1600000);     
    }
    else if (income > 2000000 && income <= 2400000) { //₹20,00,001 – ₹24,00,000 → 25%
        tax = 0.05*(800000- 400000) +0.1*(1200000-800000)+ 0.15*(1600000 - 1200000)+0.2*(2000000-1600000)+0.25*(income-2000000);  
    }
    else { //ove ₹24,00,000 → 30%*/
        tax =  0.05*(800000- 400000) +0.1*(1200000-800000)+ 0.15*(1600000 - 1200000)+0.2*(2000000-1600000)+0.25*(2400000-2000000) +0.3*(income-2400000);   
    }

    // Display the results in a formatted way
    printf("\n===================================\n");
    printf("With The Annual income %.2f", income);   // Show entered income
    printf("\n");
    printf("The Total Tax you need to Payable is : %.2f\n", tax);   // Show calculated tax
    printf("===================================\n");

    return 0;   // End of program
}