#include<stdio.h>
void main()
{
    int n,i,j,a[20],t;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the number one by one:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("Ascending order wise:");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}