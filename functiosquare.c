#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value:");
    scanf("%d",&a);
    b=square(a);
    printf("the sqrt is:%d",b);
}
    square(int a)
    {
        int b;
        b=a*a;
        return(b);
    }