#include<stdio.h>

int fact(int i){
    int factorial;
    if (i <= 1){
        factorial = 1;
    }
    else{
        factorial = (i)*fact(i-1);
    }
    return factorial;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The factorial of %d is %d.\n", num, fact(num));
return 0;
}