//Initialization, test condition and update outside the for loop

#include<stdio.h>

void main(){
    int i = 10;
    for(;;){
        i--;
        if(i<=0){
            break;
        }
        printf("%d ", i);
    }
}