//Write a program to check whether a number is divisible by 2 and 7 or not.
# include <stdio.h>
/*int main(){
    int num;
    printf (" Enter number : ");
    scanf("%d",& num);
    if (num%2 ==0 && num%7==0){
        printf("%d is divisible by both 2 and 7.\n", num);
    }
    else{
        printf("%d is NOT divisible by both 2 and 7.\n", num);

    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int num;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by 2 and 7
    if (num % 2 == 0 && num % 7 == 0) {
        printf("%d is divisible by both 2 and 7.\n", num);
    } else {
        printf("%d is NOT divisible by both 2 and 7.\n", num);
    }

    return 0;
}