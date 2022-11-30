#include<stdio.h>
void main()
{
    int n,i,c;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("Number is prime number...");
    }
    else
    {
        printf("Number is not prime number...");
    }
}