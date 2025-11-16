#include<stdio.h>

void size(){
    int*p;
    printf("%ld\n", sizeof(p));
}

void arr(){
    int a[5] = {1,2,3,4,5};
    int*p = &a[1];
    printf("%d", p[-1]);
}

void pointChange(){
    int a[5] = {2, 4, 6, 8, 10};
    int*p = &a[1];
    printf("%p\n", p);
    printf("%d %d \n", a[0], *(--p));
    printf("%p\n", p);
    printf("%d\n", p[0]);
}
int main(){
    pointChange();
return 0;
}