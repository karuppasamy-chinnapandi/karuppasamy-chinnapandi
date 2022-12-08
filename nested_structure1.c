#include<stdio.h>
struct employee{
    int eno;
    char name[20];
    int sal;
    char design[30];
};
  void main()
  {
    struct emp a1[20];
    int i,n;
    printf("\n how many records to enter:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter the record=%d",i);
        printf("enter the no:");
        scanf("%d",&a1[i].eno);
        printf("enter the name:");
        scanf("%s",&a1[i].name);
        printf("enter the salary:");
        scanf("%d",&a1[i].sal);
        printf("enter the designation:");
        scanf("%s",a1[i].design);
    }
    printf("\n\t EMPLOYEE RECORD");
    printf("\t *********");
    for(i=0;i<=n;i++){
        printf("\t*********");
        printf("the employee no is=%d\n",a1[i].eno);
        printf("the employee name is=%s\n",a1[i].name);
        printf("the employee salary is=%d\n",a1[i].salary);
        printf("the employee designation is=%s\n",a1[i].design);
    }
  }