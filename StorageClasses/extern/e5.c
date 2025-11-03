#include<stdio.h>
extern int i;
int main()
{
    printf("%d ",i);
    int i = 10;
}


/*
- extern int i;
    This line is only a declaration, not a definition.
    It just tells the compiler that “there exists an integer variable named i somewhere else.”
    No memory is allocated here.

- Inside main(),
    when the compiler encounters printf("%d", i);, it searches for a definition of i.
    Since the local i hasn’t been declared yet, it refers to the extern global i.

    Later, the line int i = 10; declares a new local variable i.
    This shadows (hides) the global one — but only after this line.
    So the printf still refers to the global i.

    However, the global i was never actually defined anywhere in this program.
    There is only an extern declaration, not a definition that allocates memory.

- As a result:

    Compilation → Successful

    Linking → Fails with “undefined reference to i” (since no memory exists for that symbol)
*/