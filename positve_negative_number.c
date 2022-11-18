#include<stdio.h>
void main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("\n The number %d is positive",a);
    }
    else{
        printf("\n The number %d is negative",a);
    }
}