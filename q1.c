// Write a program to calculate the area of a circle. The radius should be entered 
//by the user.
/*# include<stdio.h>
int main(){
    float radius;
    printf("Enter radius : ");
    scanf("%f",& radius );

    printf("The Area of a circle if %f", 3.14*radius*radius ,radius);

    return 0;


}*/
#include <stdio.h>

int main() {
    float radius, area;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area =  3.14159* radius * radius;

    
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}