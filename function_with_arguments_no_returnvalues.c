#include<stdio.h>
void main()
{
    int i,j;
    printf("enter the two values:");
    scanf("%d%d",&i,&j);
    sum(i,j);
}
sum(int x,int y)
{
    int z;
    z=x+y;
    printf("sum is+%d",z);
}