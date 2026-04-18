//Write a program to print all even numbers between 1 and 50 using a while loop. 
/*#include<stdio.h>
int main(){
    printf("all even numbers between 1 and 50 \n");
    int i=1;
    while (i <= 50) {

    if(i % 2 == 0){
        printf("%d\n",i);
    }
        i++;
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int i = 2;  // Start from the first even number

    printf("Even numbers between 1 and 50 are:\n");

    while (i <= 50) {
        printf("%d ", i);
        i +=2;  // Increment by 2 to get the next even number
    }

    printf("\n");
    return 0;
}
