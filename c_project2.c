//largest of three number.
#include<stdio.h>
int main(){
 int a=10;
 int b=200;
 int c=30;
 int max=a;
 if(b>max){
    max=b;
 }
 if(c>max){
    max=c;
 }
 printf("%d",max);
 return 0;
}