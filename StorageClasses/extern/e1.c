#include<stdio.h>

// Global initialization happens before main()

a = 3;      //sets the initial value of 'a'

void test(){
    extern int a;           //these declarations doesn't get memory allocated for a or b. They are just referrals 
                            //(or references) to global varaibles a and b declared somewhere else.
    extern int b;
    a++;
    b++;
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    printf("\n");
    b = 3;                  // Manual reset of b after printing
}

int main(){
    test();
    test();
    test();
    test();
    test();
}

// Global definitions (actually memory to a and b is allocated here)
int a;
int b;

/*
  Key Learnings:
  ------------------------------
  - "extern" doesn’t create variables — it refers to existing globals.
  - Globals (and statics) preserve their values across function calls.
  - The reason 'b' looks “reset” is because of manual assignment (b = 3).
  - 'a' behaves like a static variable because it isn’t reset — it just keeps incrementing globally.

  Behavior Summary:
  ---------------------------------------------------
  Persistent state        : a++          -> Global behaves like static
  Manual reset            : b = 3;       -> Reinitialization vs persistence
  Multiple function calls : test() x 5   -> Observe cumulative vs reset behavior
*/