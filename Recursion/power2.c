#include<stdio.h>

double myPow(double x, int n) {
    long long y = n;
    if (y < 0) y = -y;

    if (n == 0) return 1;

    double half = (y % 2 == 0) ? myPow(x * x, y / 2)
                               : myPow(x * x, y / 2) * x;

    return (n > 0) ? half : 1 / half;
}

int main(){
    float num1; int num2;
    printf("Enter 2 numbers (first may be double, second integer): ");
    scanf("%f %d", &num1, &num2);
    printf("%f raised to the power %d is = %f\n", num1, num2, myPow(num1, num2));
}