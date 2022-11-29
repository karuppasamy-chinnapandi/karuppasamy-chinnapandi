#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];char s2[30];
    printf("Enter the first name:");
    scanf("%s",&s1);
    printf("Enter the second name:");
    scanf("%s",&s2);
    strcat(s1,s2);
    printf("The string concatenate is:%s",s1);
}