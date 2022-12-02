#include<stdio.h>
void main()
{
    sum();
}
sum(){
    int i,j,k;
    printf("enter the two values:");
    scanf("%d%d",&i,&j);
    k=i+j;
    printf("sum=%d",k);
}