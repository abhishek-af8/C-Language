#include<stdio.h>
#include<stdbool.h>

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    if((n%2!=0) || (n<=0)){
        return false;
    }
    else{
        return isPowerOfTwo(n/2);
    }
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    bool result = isPowerOfTwo(num);
    printf("%d is %sa power of two.\n", num, result ? "" : "not ");
return 0;
}