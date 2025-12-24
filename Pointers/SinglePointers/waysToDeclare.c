#include<stdio.h>

int main(){
    int     *   p, x;
    x = 3;
    p = &x;

    int*        m, y;
    y = 5;
    m = &y;

    int        *n, z;
    z = 7;
    n = &z; 

    printf ("The address of variable x having value %d is %p\n", x, p);
    printf ("The address of variable y having value %d is %p\n", y, m);
    printf ("The address of variable z having value %d is %p\n", z, n);
return 0;
}