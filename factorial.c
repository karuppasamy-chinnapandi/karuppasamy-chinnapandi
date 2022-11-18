#include<stdio.h>
void main()
{
    int i,f,a;
    printf("enter a no:");
    scanf("%d",&a);
    f=1;
    for(i=1;i<=a;i++)
    f=f*i;
    printf("factorial value is %d",f);
}