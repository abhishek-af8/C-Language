#include<stdio.h>

int sumEven(int n){
    int sum;
    if (n<2){
        return 0;
    }
    else if (n%2==0){
        return n+sumEven(n-2);
    }
    else{
        return sumEven(n-1);
    }
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The sum of even numbers till %d is = %d\n", n, sumEven(n));
return 0;
}