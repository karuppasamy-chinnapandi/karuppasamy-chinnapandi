#include<stdio.h>
struct student{
    char name[20];
    int age;
    char address[20];
}s1;
void main(){
    printf("enter the name:");
    scanf("%s",&s1.name);
    printf("enter the age:");
    scanf("%d",&s1.age);
    printf("enter the address:");
    scanf("%s",&s1.address);
    printf("the name is %s",s1.name);
    printf("the age is %d",s1.age);
    printf("the address is %s",s1.address);
}