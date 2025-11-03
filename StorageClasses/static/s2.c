#include<stdio.h>

int g(int i)
{
    static int Y = 0;
    Y = Y + i;
    return Y;
}
int f(int i){
    static int X = 0;
    X = X + i;
    X = g(X);
    return X;
}

int main(){
    int i, j;
    for(i=0; i<=6; i++){
        j = f(i);
    }
    printf("%d \n", j);
return 0;
}