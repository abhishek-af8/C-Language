#include<stdio.h>

int main(){
    int a, b, temp;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("\nBefore swap : \na = %d, and b = %d\n\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap : \na = %d, and b = %d\n", a, b);
return 0;
}