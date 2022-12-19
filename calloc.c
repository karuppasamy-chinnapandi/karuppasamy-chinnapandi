#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i,*ptr,sum =0;
    printf("enter the elements:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("sorry! unable to allocate memory");
        exit(0);
    }
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("sum=%d",sum);
    free(ptr);
}