#include<stdio.h>
#include<string.h>

int main(){
    char temp;
    char str[21];                   //this cannot take input of a string more than 20 chars from user, else buffer 
                                    //overflow. The last byte is for the null char which makes this char array a string
    printf("Enter a string : ");
    scanf("%20s", str);             //now the %20s is a format specifier which limits scanf to take only 20 characters 
                                    //as input, no matter how much chars the user enters in the input box

    int length = strlen(str);

    char*start = str;
    char*end = str+(length-1);

    printf("Original String : %s\n", str);

    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed String = %s\n", str);

    return 0;
}