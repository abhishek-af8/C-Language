#include<stdio.h>

int my_strcmp(char*s1, char*s2, int n){
    for(int i = 0; i<n; i++){
        if(s1[i]!=s2[i]){
            if(s1[i]>s2[i]){
                return 1;
            }
            if(s1[i]<s2[i]){
                return -1;
            }
        }
    }
    return 0;
}

int main(){
    char s1[] = "hello";
    char s2[] = "hell";
    int n = sizeof(s1)-1;
    int result = my_strcmp(s1, s2, n);
    printf("%d\n", result);
return 0;
}
