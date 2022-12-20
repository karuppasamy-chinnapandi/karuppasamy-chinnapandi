#include<stdio.h>
#include<stdlib.h>
void main(){
    int*ptr=malloc(10*sizeof(*ptr));
    if(ptr!=NULL){
        *(ptr+2)=50;
        printf("value of the 2nd integer is%d",*(ptr+2));
    }
    free(ptr);
}