#include<stdio.h>

int gInt;

void change_extern(void){
    printf("change_extern1 gInt %d\n", gInt);
    gInt = 10;
    printf("change_extern1 gInt %d\n", gInt);
}