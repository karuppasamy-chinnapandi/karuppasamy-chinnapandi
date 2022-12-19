#include<stdio.h>
#include<stdlib.h>
void main()
{
    char*ptr;
    ptr=(char*)malloc(10);
    strcpy(ptr,"programming");
    printf("%s,address=%u\n",ptr,ptr);
    ptr=(char*)realloc(ptr,20);
    strcat(ptr,"in C");
    printf("%s,address=%u\n",ptr,ptr);
    free(ptr);
}