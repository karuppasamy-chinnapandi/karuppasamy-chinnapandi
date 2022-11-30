#include<stdio.h>
void main()
{
    int a,b,c;
    a=20;
    b=30;
    c=add(a,b);
    printf("The answer is:%d",c);
}
    add(int a,int b)
    {
        int c;
        c=a+b;
        return(c);
    }