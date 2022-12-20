#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union courses{
    char website[50];
    char subject[50];
    int price;
};
void main(){
    union courses C;
    strcpy(C.website,"w3schools.in");
    printf("website:%s\n",C.website);
    strcpy(C.subject,"the programming language");
    printf("subject:%s\n",C.subject);
    C.price=0;
    printf("book price:%d\n",C.price);
}