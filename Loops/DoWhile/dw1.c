#include<stdio.h>

int main(){
    int i=1, j=10;
    do{
        printf("%d ", i);
        i++;
    }
    while(i+3<j);

return 0;
}