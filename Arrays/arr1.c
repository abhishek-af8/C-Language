#include<stdio.h>

int globalArray[10];
int x = sizeof(globalArray)/sizeof(globalArray[0]);     //though a general array but behave like a static array, because it's a global array.

void garbageValArray(){
    int arr[10];                        //declares an array having 10 elements, each element being a garbage value.
    int x = sizeof(arr)/sizeof(arr[0]);
    printf("The length of array arr is : %d\n",x);

    printf("The elements of array are : \n");
    for(int i = 0; i<x; i++){
        printf("Element %d = %d\n", i+1, arr[i]);
    }
}

void staticArray(){
    static int arr[10];                 //declares an array having 10 elements, each element having a value 0.
    int x = sizeof(arr)/sizeof(arr[0]);
    printf("The length of array arr is : %d\n",x);

    printf("The elements of array are : \n");
    for(int i = 0; i<x; i++){
        printf("Element %d = %d\n", i+1, arr[i]);
    }
}

int main(){

    staticArray();
    printf("\n");
    garbageValArray();
    printf("\n");
    printf("The elements of global array are : \n");
    for(int i = 0; i<x; i++){
        printf("Element %d = %d\n", i+1, globalArray[i]);
    }
    return 0;
}