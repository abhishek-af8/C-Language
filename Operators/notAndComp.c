#include<stdio.h>

int main(){
    int a = 0000;
    // int b = ~a;
    int c = !a;
    // printf("b = %d & c = %d\n", b, c);
    printf("c = %d\n", c);
return 0;
}

//logical not (!) : works on boolean variables, transforms a non-zero value to zero and, a zero value to 1. 
//for example : !123 = 0 and !0 = 1

//bitwise not (~) : works on bits, complements the bits of your data, 0 to 1 and 1 to 0.
//for example : ~1 = -1 or ~(-1) = 1