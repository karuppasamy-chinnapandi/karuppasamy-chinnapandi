#include<stdio.h>
void main()
{
    int i,n;
    printf("enter a no:");
    scanf("%d",&n);
    for(i=15;i>=n;i--)
    {
        printf("%d\n",i);
    }
}