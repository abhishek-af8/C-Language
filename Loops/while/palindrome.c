#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    int rem;
    long long rev=0;
    int num = x;
    while(x>0){
        rem = x%10;
        rev = rev*10+rem;
        x/=10;
    }
    if (rev==num){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d is %sa palindrome\n", n, isPalindrome(n)?"":"not ");
}
