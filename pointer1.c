#include<stdio.h>
void main()
{
    int a=3,b;
    b=&a;
    printf("the value a is %d\n",a);
    printf("the address of a is %u\n",&a);
    printf("the address of b is %u\n",b);
    printf("the address of b is %u\n",&b);
    printf("the address of a is %u\n",*(&b));
    printf("the value of a is %d\n",*(&a));
    printf("the value  of a is %d\n",**(&b));
}