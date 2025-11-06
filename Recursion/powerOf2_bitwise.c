#include<stdio.h>
#include<stdbool.h>

bool isPow2(int n){
    if(n<=0){
        return false;
    }
    bool p = n&(n-1);
    return !p;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%d is %sa power of 2.\n", num, isPow2(num)?"":"not ");
return 0;
}