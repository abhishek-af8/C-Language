#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array below.\n");
    for(int i = 0; i<n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }


    printf("The elements of the array are : \n");
    for(int*p=a; p<a+n; p++){                   //at every iteration, pointer p is compared with pointer p+n
        if (p=a){
            printf("%d", *p);
        }          
        else{
            printf(", %d", *p);
        }                                           
    }


    printf("\n");

return 0;
}