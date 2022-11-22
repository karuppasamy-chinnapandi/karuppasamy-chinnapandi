#include<stdio.h>
void main()
{
    int a,b,c,n;
    printf("\n1.add\n2.sub\n3.mul\n4.div\n5.exit");
    printf("Enter your choice:");
    scanf("%d",&n);
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Answer is:");
    switch(n) {
        case 1:
              c=a+b;
              printf("%d",c);
              break;
        case 2:
              c=a-b;
              printf("%d",c);
              break;
        case 3:
              c=a*b;
              printf("%d",c);
              break;
        case 4:
              c=a/b;
              printf("%d",c);
              break;
        default:
              exit(0);
          }
}