#include<stdio.h>
void main()
{
    int a[100],n,i,s=0;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    s=s+a[i];
    for(i=0;i<=n;i++)
    printf("\n The given value is:%d",a[i]);
    printf("\n results=%d",s);
}
