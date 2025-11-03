#include<stdio.h>

extern gInt;

void change_extern(void);

int main(){
    printf("main1 gInt %d\n", gInt);
    change_extern();
    gInt = 5;
    change_extern();
    printf("main2 gInt %d\n", gInt);
return 0;
}