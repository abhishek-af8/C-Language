#include<stdio.h>

int main(){
    char *str = "Stanford University";
    char a = str[1];
    char b = *(char*)((int*)str+3);
    printf("%c %c\n", a, b);
return 0;
}