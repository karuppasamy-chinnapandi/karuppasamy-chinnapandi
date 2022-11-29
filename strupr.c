#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20];
    printf("Enter the name:");
    scanf("%s",&s1);
    printf("The string uppercase is:%s",strupr(s1));
}