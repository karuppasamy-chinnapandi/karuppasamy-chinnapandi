#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    char s1[20];
    printf("Enter the name:");
    scanf("%s",&s1);
    n=strlen(s1);
    printf("\n the length of the s1 is %d",n);
}