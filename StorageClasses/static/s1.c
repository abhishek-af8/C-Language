#include<stdio.h>

int test(){
    int static satic = 3;
    satic++;
    printf("%d \n", satic);
}

int main(){
    test();
    test();
    test();
return 0;
}