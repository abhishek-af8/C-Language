// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[20];
//     printf("Enter a string : ");
//     scanf("%s", str);

//     int length = strlen(str);
//     // printf("%d\n",length);

//     char*p = str+(length-1);

//     for(int i=0; i<length; i++){
//         printf("%c", *(p));
//         p--;
//     }
//     printf("\n");

// return 0;
// }


#include<stdio.h>
#include<stdlib.h>
int mirrorDistance(int n) {
    int rev = 0;
    int ncopy = n;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    return abs(ncopy - rev);
}
int main(){
    int n = 512;
    int result = mirrorDistance(n);
    printf("%d\n", result);
}