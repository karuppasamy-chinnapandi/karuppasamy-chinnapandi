#include<stdio.h>
struct employee{
    int no;
    char name[30];
    float sal;
}emp1,emp2;
void main()
{
    printf("enter the first employee details:");
    printf("enter the no:");
    scanf("%d",&emp1.no);
    printf("enter the name:");
    scanf("%s",&emp1.name);
    printf("enter the salary:");
    scanf("%f",&emp1.sal);
    printf("enter the second employee deatils:");
    printf("enter the no:");
    scanf("%d",&emp2.no);
    printf("enter the name:");
    scanf("%s",&emp2.name);
    printf("enter the salary:");
    scanf("%f",&emp2.sal);
    printf("\n no=%d",emp1.no);
    printf("\n name=%s",emp1.name);
    printf("\n salary=%f",emp1.sal);
    printf("\n no=%d",emp2.no);
    printf("\n name=%s",emp2.name);
    printf("\n salary=%f",emp2.sal);
}