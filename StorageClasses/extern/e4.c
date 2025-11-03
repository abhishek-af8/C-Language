#include<stdio.h>

extern int i;

int i = 10;

int main(){
    printf("%d", i);
return 0;
}

/*
extern int i;
this line has no role here. It's an unneccesary line here, because it just says that i exists somehwere. This is declarartion only, no memory is allocated here for i.

By "int i = 10" declaration, "i" gets a value 10. Here, i actually gets a place in memory of the program.

And hence, when the printf is executed, 10 gets printed.

*/