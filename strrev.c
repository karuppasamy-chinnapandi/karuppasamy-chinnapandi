#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];
    printf("Enter the name:");
    scanf("%s",&s1);
    printf("The string reverse is:%s",strrev(s1));
}