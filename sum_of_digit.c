#include<stdio.h>
void main()
{
    int a,n,b=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do{
        a=n%10;
        b=b+a;
        n=n/10;
      }  
      while(n!=0);
      printf("Sum of the digit is:%d",b);
}

