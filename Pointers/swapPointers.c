#include<stdio.h>

int swap (int*a, int*b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int x = 10, y = 20;
    printf("Before swap \nx = %d, y = %d\n\n", x, y);
    swap(&x, &y);
    printf("After swap \nx = %d, y = %d\n", x, y);
return 0;
}

/*
VERSION - 2 of swap() :-

int swap (int*a, int*b){
    int c;
    int *t = &c;
    *t = *a;
    *a = *b;
    *b = *t;
}
    
*/