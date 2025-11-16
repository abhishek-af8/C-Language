#include<stdio.h>

void size(){
    int*p;
    printf("%ld\n", sizeof(p));
}

void arr(){
    int a[5] = {1,2,3,4,5};
    int*p = &a[1];
    // printf("%d", p[-1]);
    printf("%d\n", a[-1]);


}

void pointChange(){
    int a[5] = {2, 4, 6, 8, 10};
    int*p = &a[1];                      //p ponits to a[1]
    printf("%p\n", p);                  //assume p has address X 
    printf("%d %d \n", a[0], *(--p));   //now p points to a[0] as --p happened.
    printf("%p\n", p);                  //now p will have address X-4 as it will point an index back, and one index in an 
                                        //integer array is of size 4 bytes.
    printf("%d\n", p[0]);
}
int main(){
    arr();
return 0;
}