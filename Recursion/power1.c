#include<stdio.h>

double myPow(double x, int n) {

    long long y = n;

    if (y<0){
        y*=-1;
    }

    if(n==0){
        return 1;
    }
    else if(n%2==0 && n<0){
        return 1/myPow(x*x, y/2);
    }
    else if(n%2==0 && n>0){
        return myPow(x*x, y/2);
    }
    else if(n%2!=0 && n<0){
        return 1/(myPow(x*x, y/2)*x);
    }
    else{
        return (myPow(x*x, y/2)*x);
    }
}

int main(){
    float num1; int num2;
    printf("Enter 2 numbers (first may be double, second integer): ");
    scanf("%f %d", &num1, &num2);
    printf("%f raised to the power %d is = %f\n", num1, num2, myPow(num1, num2));
}