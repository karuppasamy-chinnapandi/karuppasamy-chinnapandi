#include<stdio.h>
void main(){
    int a,b,n,i;
    printf("enter the table:");
    scanf("%d",&a);
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        b=i*a;
        printf("\n%d*%d=%d",i,a,b);
    }
}