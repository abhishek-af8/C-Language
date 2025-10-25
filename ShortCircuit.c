#include<stdio.h>

int OrCkt(){
    int a = 1, b = 1, c = -1, d = c;

    if(a==b || c++){                                                //the most important checkpoints
        if(d==c){
            printf("The (unupdated) value of c is = %d\n", c);
        }
        else{
            printf("The updated value of c is = %d\n", c);
        }
    }
    else{
        printf("The if block was not executed\n");
        printf("The value of c is = %d\n", c);
        
    }
}

// OrCkt() : Well here while using logical OR in an if condition, if the first condition is found to be true, the 2nd condition is not checked like what happened in this function. In the outer if we can see that a==b is true and we have an logical OR operator, therefore, there is no way that the whole condition in this if argument becomes false and that is why the c++ is not even executed (that's called short circuiting using logical OR). And that's why the value of C remains the same, i.e., c=-1 or c=d simply because of which the inner if gets executed and the vlue of c is still found to be -1.


int AndCkt(){
    int a = 1, b = 2, c = 3, d=c;
    if(a==b && c++){                                                //the most important checkpoints
        if(d==c){
            printf("The (unupdated) value of c is = %d\n", c);
        }
        else{
            printf("The updated value of c is = %d\n", c);
        }
    }
    else{
        printf("\nThe if block was not executed\n");
        printf("The value of c is = %d\n", c);
        
    }
}

// AndCkt() : Here while using the logical AND operator in an if condition, if the first condition is found to be false, then the 2nd condition is not checked which we saw in this function. In the outer If block, we saw that a==b was not true and we had a logical AND operator, therefore, there is no way the whole condition in this if argument becomes true and that is why the c++ is not executed here (this is short circuiting using logical AND). Because of that the entire outer if block doesn't get executed, and the else executes and prints that the if block was not executed and prints the same value of c which we had assigned to it, i.e., c = 3.

int main(){
    OrCkt();
    AndCkt();
return 0;
}


// the short circuting is done for compiler efficiency and correctness. Why waste time and CPU cycles if you already can know the result without checking any more conditions.