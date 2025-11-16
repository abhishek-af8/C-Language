#include<stdio.h>
#include<stdbool.h>

void way1(){
    static int a[5];
    // a[1] = 10;
    printf("%d\n%p\n",*(a+1),&a[1]);
    printf("\n%p\n%p\n",(a+1),&a[1]);
}

void way2(){
    int*pa;
    int a[10];
    a[0]=a[1]=3;
    pa = a;
    printf("%d\n", *pa);
}

void way3(){
    int x, y=3, z=4;
    x = 5 != y+z;
    printf("%d", x);
}

int main(){
    way3();
return 0;
}