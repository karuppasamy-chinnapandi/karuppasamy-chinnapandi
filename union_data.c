#include<stdio.h>
#include<string.h>
union data{
    int i;
    float f;
    char str[20];
};
void main(){
    union Data data;
    printf("memory size occupied by data:%d\n",sizeof(data));
}