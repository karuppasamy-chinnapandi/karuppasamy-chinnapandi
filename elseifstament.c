#include<stdio.h>
void main(){
    int x,y,z;
    printf("enter the values:");
    scanf("%d%d%d",&x,&y<&z);
    if(x>y&&x>z){
        printf("x is greater");
    }
    else if(y>x&&y>z){
        printf("y is greater");
    }
    else{
        printf("z is greater");
    }
}