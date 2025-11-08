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
    printf("\n");
    fun(3);
    printf("\n\n");
    return 0;
}


/*
Process: The entire program
└── Thread: main()
    ├── fun(3)
    │   ├── fun(2)
    │   │   ├── fun(1)
    │   │   └── return
    │   └── return
    └── return

The Output will be : (1, 1) (2, 1) (3, 1) [3, 1] [3, 1] [3, 1].
We will discuss why it is like that in greater detail


So first of all 
fun(3) is called

static int x = 0 is declared and initialised [Static Variables are initialised only once, the first time the function is called]
then 
int y = 0 is declared [local to function, it will be initialised each time the function is called]

now here n>0, so 
x++ happens setting x value to 1
and y++ sets y value to 1
then
printf("(%d, %d) ", x, y); is executed that prints the first pair (1, 1)
then fun(2) is called first and fun(3) waits for fun(2) to return before executing printf("[%d, %d] ", x, y); 


Now
fun(2) is called
again y is initialised to 0 because its just a local var whose lifetime was till the end of fun(3) execution
fun(2) will get a fresh initialisation of y for it's stack
x remains as it is which is 1 because its static so it lives for the whole program
n>0 is true here, so 
x++ results in x=2
y++ results in y=1

printf("(%d, %d)", x, y); is executed and (2, 1) is printed


Then
fun(1) is called and fun(2) waits for fun(1) to returns before executing printf("[%d, %d] ", x, y);

just like fun(2), fun(1) is also excuted and prints (3, 1)

at this point x = 3 and y = 1 for fun(1)


Now,
fun(0) is called and x remains 3 and y is initialise to y=0 again.
Now here, n>0 is false.
so it returns to fun(1)


fun(1) is waiting to execute printf("[%d, %d] ", x, y); and x == 3 and in fun(1) frame in program's stack y = 1 so it prints [3, 1] and returns to fun(2) which also prints [3, 1] in the same way and fun(3) also prints [3, 1] in the same way. 


Look here very minutely, fun(0) was called and it reinitialised y=0 but despite this reinitialisation, each fun(1), fun(2) and fun(3) print y=1. Why? 
- Because y=0 has been initialised only in fun(0)'s frame in program's stack. fun(1), fun(2) and fun(3) still hold the value of y = 1 in their respective frames in the program's stack. Hence, all of them return a y value = 1.


So everyone gets,
x from program's static area and y from it's own frame in program's stack.


Meaning : since x is a static variable so each function call fetches it from program's static area. And, since y is a local variable in each function call so each function call fetches y's value from its own activation record's stack.
*/