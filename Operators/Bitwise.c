#include<stdio.h>

int oddEvenAND(int n){
    printf("Enter a number : ");
    scanf("%d", &n);

    int test = 1;
    if(n & test){
        printf("The number you entered is ODD.\n");
    }
    else{
        printf("The number you entered is EVEN.\n");
    }
}

int pow2LS(){
    int num = 1;
    for(int i = 0; i<32; i++){
        printf("2^%d = %u\n",i, num);
        num<<=1;
    }
}

int ls(){
    int x = 1;
    int y = x<<3;
    printf("%d \n", y);
}

int rs(){
    int x = 256;
    int y = x>>3;
    printf("%d \n", y);
}

int onesC(){
    int x = 64;
    int y = ~x;
    printf("%d\n", y);
}

int main(){
    onesC();
return 0;
}
