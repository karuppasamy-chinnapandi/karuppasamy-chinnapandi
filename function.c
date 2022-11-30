#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the two values:");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("The answer:%d",c);
}
    add(int a,int b)
   {
    int c;
    c=a+b;
    return(c);
   }
