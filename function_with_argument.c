#include<stdio.h>
void main()
{
    void fact(int);
    int n1;
    printf("enter the no:");
    scanf("%d",&n1);
    fact(n1);
}
void fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    printf("the factorial value is:%d",f);
}