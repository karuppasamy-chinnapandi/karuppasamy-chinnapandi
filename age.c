#include<stdio.h>
void main ()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("your are eligible to vote....");
    }
    else {
        printf("your not eligible to vote....");
         }
}