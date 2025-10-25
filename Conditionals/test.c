#include<stdio.h>

int main(){
    unsigned short num;
    printf("Enter a number : ");
    scanf("%hd", &num);

    printf("The entered number is : %hu\n", num);
return 0;
}