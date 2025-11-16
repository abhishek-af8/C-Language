#include<stdio.h>

void pointerAddSub(){
    int a[10];
    int *p = a;
    int *q = p+3;
    printf("p = %u\nq = %u\nq-p = %d\np-q = %d\n",p, q, q-p, p-q);
}

void pointerComparison(){
    int a[10];
    int *p = a;
    int *q = p+3;
    if(p>q){
        printf("p>q\n");
        printf("And the difference is %d where p = %p and q = %p\n", q-p, p, q);
    } 
    else{
        printf("q>p\n");
        printf("And the difference is %d where p = %u and q = %u.\nSince both p and q are integer pointers, so mathematically, (q-p)/[sizeof(int)] is the difference, i.e., [q (%u) - p (%u)]/[sizeof(int) = %d] = 3\n", q-p, p, q, q, p, sizeof(int));
    }
}

int main(){
    pointerComparison();
return 0;
}