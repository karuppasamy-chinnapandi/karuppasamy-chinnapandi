#include<stdio.h>
void main()
{
    int mark[5],a,n,total;
    printf("Enter how many subjects:");
    scanf("%d",&n); 
    printf("Enter the marks:");
    for(a=1;a<=n;a++)
    scanf("%d",&mark[a]);
    total=0;
    for(a=1;a<=n;a++)
    total=total+mark[a];
    printf("Total=%d",total);
}