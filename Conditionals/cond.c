#include<stdio.h>

int main(){
    int a;
    // while(-23){
    //     printf("Enter a number : ");
    //     scanf("%d", &a);
    //     if(a==5)
    //     break;
    // }

    printf("Enter a : ");
    scanf("%d", &a);
    if (a<10){
        if(a%2 == 0)
            printf("a is even and less than 10");}
    
    else
    printf("Mystery");
    
return 0;
}
