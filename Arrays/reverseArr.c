#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elemets : ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("The original array : ");
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }

    int*start = arr;
    int*end = arr+(size-1);
    int temp;
    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("\nThe reversed array is : ");
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }

return 0;
}
