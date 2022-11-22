#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b,n1,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        a=n%10;
        b=pow(a,3);
        n=n/10;
    }
    if(n1==c)
    printf("The given number is armstrong no");
    else
    printf("The given number is not armstrong no");
}