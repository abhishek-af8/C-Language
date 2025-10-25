#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int test = 1;
    if(n & test){
        printf("The number you entered is ODD.\n");
    }
    else{
        printf("The number you entered is EVEN.\n");
    }

return 0;
}
