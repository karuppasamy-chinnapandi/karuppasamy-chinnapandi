#include<stdio.h>
void main()
{
    printline();
}
printline()
{
    int i,n;
    printf("enter the values:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("*");
}