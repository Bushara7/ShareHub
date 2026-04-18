
//Write a program to find the largest of three numbers using if-else statements.
/*#include<stdio.h>
int main(){

int num1;
printf("Enter First Number : ");
scanf ("%d", & num1);

int num2;
printf("Enter Second Number : ");
scanf ("%d", & num2);

int num3;
printf("Enter third Number : ");
scanf ("%d", & num3);

if (num1>num2 && num1 > num3){
    printf("%d is largest of three number\n",num1);
}
else if (num2>num3 && num2>num1){
    printf("%d is largest of three number\n",num2);
}
else{
    printf("%d is largest of three number\n",num3);
}
 return 0;

}*/
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare using if-else
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}