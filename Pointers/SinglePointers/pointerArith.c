#include<stdio.h>

int main(){
    int x = 10;
    char *p = &x;

    // char y = 90;
    // int*py = &y;

    printf("%u\n", p);
    printf("%u\n", *p);
    printf("%u\n", p+1);
    // printf("%u\n", py);
    // printf("%u\n", py+1);
    // printf("%u\n", *(py+1));
return 0;
}