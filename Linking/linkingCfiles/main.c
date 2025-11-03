#include<stdio.h>

// #include "b.h"       //#include <b.h> tells the compiler to look only in the system
                        //include paths (like standard libraries).
                        //You should use #include "b.h" so it first looks in the current directory.

int sum (int x, int y);

int main(){

    // int printf(char *, ...);

    int a;
    a = sum (3, 3);
    printf("%d \n", a);
}



// THE BEST ADVICE I HAVE EVER GOT : "To give a tagda solution, you first need to understand what the problem exactly is that too with utmost clarity. Understanding the problem with greater depth is the most crucial step, even more crucial than giving the solution actually"