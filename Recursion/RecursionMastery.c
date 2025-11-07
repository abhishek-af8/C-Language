#include <stdio.h>

int fun(int n)
{
    static int x = 0;  
    int y = 0;          

    if (n > 0)
    {
        x++;             
        y++;             
        printf("(%d, %d) ", x, y);  
        fun(n - 1);
        printf("[%d, %d] ", x, y);  
    }

    return 0;
}

int main()
{
    fun(3);
    return 0;
}


/*

So first of all 
fun(3) is called

static int x = 0 is declared 
then 
int y = 0 is declared

now here n>0, so 
x++ happens setting x value to 1
and y++ sets y value to 1
then
printf("(%d, %d) ", x, y); is executed that prints the first pair (1, 1)
then fun(2) is called first and fun(3) waits for fun(3) to return before executing printf("[%d, %d] ", x, y); 

now fun(2) is called
again y is initialised to 0 because its just a local var whose lifetime was till the end of fun(3) execution
fun(2) will get a fresh initialisation of y for it's stack
x remains as it is which is 1
n>0 is true here so 
x++ results in x=2
y++ results in y=1

printf("(%d, %d)", x, y); is executed and (2, 1) is printed 
then fun(1) is called and fun(2) waits fun(1) to returns before executing printf("[%d, %d] ", x, y);

just like fun(2), fun(1) is also excuted and prints (3, 1)

Now x = 3 and y = 1

fun(0) is called and here n>0 is false
so it returns to fun(1)
fun(1) is waiting to execute printf("[%d, %d] ", x, y); and x == 3 and in fun(1) stack y = 1 so it prints [3, 1] and returns to fun(2) which also prints [3, 1] in the same way and fun(3) also prints [3, 1] in the same way


x from program's static area and y from it's own stack


Meaning : since x is a static variable so each function call fetches it from program's static area. And, since y is a local variable in each function call so each function call fetches y's value from its own activation record's stack.

*/