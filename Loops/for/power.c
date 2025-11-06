#include<stdio.h>

double myPow(double x, int n) {

    int z = n;

    if(n==0){
        return 1;
    }

    if (n<0){
        n*=(-1);
    }

    double pow = 1;

    for(int i=1; i<=n; i++){
        pow = pow*x;
    }

    if(z>0){
        return pow;
    }
    else{
        return 1/pow;
    }
}

int main(){
    float num1; int num2;
    printf("Enter 2 numbers (first may be double, second integer): ");
    scanf("%f %d", &num1, &num2);
    printf("%f raised to the power %d is = %f\n", num1, num2, myPow(num1, num2));
}