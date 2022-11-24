#include<stdio.h>
void main()
{
    int n;
    float faren,cel;
    printf("Enyer your choice 1 or 2:");
    scanf("%d",&n);
    switch(n){
        case 1:
              printf("Enter the farenheit value");
              scanf("%f",&faren);
              cel=(faren-32)/1.8;
              printf("%0.2f",cel);
              break;
        case 2:
              printf("Enter the celsius value");
              scanf("%f",&cel);
              faren=(1.8*cel)+32;
              printf("%0.2f",faren);
              break;      
             }
}
