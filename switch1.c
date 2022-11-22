#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number from 1 to 7 display the equivalent day:");
    printf("Enter your choice of a day in number's:");
    scanf("%d",&n);
    switch(n){
           case 1:
              printf("The first day is sunday");
              break;
           case 2:
              printf("The second day is monday");
              break;
           case 3:
              printf("The third day is tuesday");
              break;
           case 4:
             printf("The fourth day is wednesday");
             break;
           case 5:
             printf("The fifth day is thursday");
             break;
           case 6:
             printf("The sixth day is friday");
             break;
           case 7:
             printf("The seventh day is saturday");
             break;
           default:
             printf("Invalid choice");
             break;
     }
}