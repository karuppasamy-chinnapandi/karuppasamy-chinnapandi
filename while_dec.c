#include<stdio.h>
void main()
{
    int i,n;
    i=20;
    printf("Enter a no:");
    scanf("%d",&n);
    while(i>=n){
        printf("The value is:%d\n",i);
        i=i-1;
    }
}