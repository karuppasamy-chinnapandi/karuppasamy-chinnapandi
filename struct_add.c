#include<stdio.h>
struct add{
    int a,b,c;
}a1;
void main(){
    printf("enter the first value:");
    scanf("%d",&a1.a);
    printf("enter the second values:");
    scanf("%d",&a1.b);
    a1.c=a1.a+a1.b;
    printf("the answer is = %d",a1.c);
}