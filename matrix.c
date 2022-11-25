#include<stdio.h>
void main()
{
    int rowcount,columncount,i,j;
    int firstmatrix[10][10],secondmatrix[10][10],resultmatrix[10][10];
    printf("Number of rows:");
    scanf("%d",&rowcount);
    printf("Number of columns:");
    scanf("%d",&columncount);
    printf("first matrix:");
    for(i=0;i<rowcount;i++)
    for(j=0;j<columncount;j++)
    scanf("%d",firstmatrix[i][j]);
    printf("second matrix:");
    for(i=0;i<rowcount;i++)
    for(j=0;j<columncount;j++)
    scanf("%d",&secondmatrix[i][j]);
    printf("sum of entered matrix:");
    for(i=0;i<rowcount;i++){
    for(j=0;j<columncount;j++){
        resultmatrix[i][j]=firstmatrix[i][j]+secondmatrix[i][j];
        printf("%d\t",resultmatrix[i][j]);
    }
    printf("\n");
    }
}