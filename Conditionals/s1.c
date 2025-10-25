//switch1.c

#include<stdio.h>
#include <stdbool.h>
#include<limits.h>

int main(){
    int num;
    printf("Enter a case number : ");
    scanf("%d", &num);
    switch(num){

        default:
        printf("Hello I am Default\n");
        break;

        case 1:
        printf("Hello I am 1 \n");
        break;
        
        case 3:
        printf("Hello I am 3 \n");
        break;

        case 5:
        printf("Hello I am 5 \n");
        break;

        case 7:
        printf("Hello I am 7 \n");
        break;

        case 9:
        printf("Hello I am 9 \n");
        break;

    }

    printf("Hello Moto\n");

return 0;

printf("Hello Samsung\n");

}
