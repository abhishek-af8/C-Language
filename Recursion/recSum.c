#include<stdio.h>

int recSum(int n){
    if (n==0){
        return 0;
    }
    else{
        return n + recSum(n-1);
    }
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The sum of first %d numbers is = %d\n", n, recSum(n));

return 0;
}
