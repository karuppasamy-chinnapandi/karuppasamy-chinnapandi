#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];
    printf("Enter the name:");
    scanf("%s",&s1);
    printf("The string lowercase is:%s",strlwr(s1));
}