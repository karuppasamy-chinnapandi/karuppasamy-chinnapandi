#include <stdio.h>
int main()
{
    int i=1,number=0;
    printf("enter the number:");
    scanf("%d",&number);
    for(i=2;i<=10;i++)
    {
    printf("%d\n",(number*i));
    }
    return 0;
}