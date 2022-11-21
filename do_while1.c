#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    i=15;
    do{
        printf("%d\n",i);
        i=i+1;
      }
      while(i<=n);
}