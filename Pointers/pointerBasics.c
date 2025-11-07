#include<stdio.h>

int main(){
    int *p, x;
    x = 3;
    p = &x;

    printf ("The address of variable x having value %d is %p\n", x, p);
return 0;
}