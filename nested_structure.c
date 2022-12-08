#include<stdio.h>
struct employee{
    char name[20];
    int age;
    char address[30];
    struct department{
        char deptname[20];
        int deptno;
        char design[20];
    }d;
}e;
void main()
{
    struct employee e;
    printf("enter the name:");
    scanf("%s",&e.name);
    printf("enter the age:");
    scanf("%d",&e.age);
    printf("enter the address:");
    scanf("%s",&e.address);
    printf("enter the deptname:");
    scanf("%s",&e.d.deptname);
    printf("%d",&e.d.design);
    printf("the name is=%s",e.name);
    printf("the age is=%d",e.age);
    printf("the address is=%s",e.address);
    printf("the deptname is=%s",e.d.deptname);
    printf("the deptno is=%d",e.d.deptno);
    printf("the designation is=%s",e.d.design);
}