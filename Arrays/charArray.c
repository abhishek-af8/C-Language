#include<stdio.h>
#include<string.h>

void NoDimension(){
    char S[] = "Abhishek";                  //compiler will automatically put null character at the end of the char array.
                                            //    ['A', 'b', 'h', 'i', 's', 'h', 'e', 'k', '\0']
                                            //This is the correct and safe way to store string literals in arrays when you want them to behave as strings (char * type semantics).
    int x = sizeof(S)/sizeof(S[0]);
    printf("The size of S[] is : %d\n", x); //thats why size is 9 here.

    printf("The elements in S[] are : \n");
    for(int i=0; i<x; i++){
        printf("Element %d is = %c - ASCII value = %d\n", i+1, S[i], S[i]);
    }
}

void Dimension(){
    char S[8] = "Abhishek";                 //compiler won't automatically put null character at the end of the char array.
                                            //    ['A', 'b', 'h', 'i', 's', 'h', 'e', 'k']
                                            //it’s no longer a string in the C sense, it's just a char array that happens to contain letters.
    int x = sizeof(S)/sizeof(S[0]);
    printf("The size of S[] is : %d\n", x); //thats why size is 8 here.

    printf("The elements in S[] are : \n");
    for(int i=0; i<x; i++){
        printf("Element %d is = %c - ASCII value = %d\n", i+1, S[i], S[i]);
    }
}

int main(){
    NoDimension();
    printf("\n");
    Dimension();
    
return 0;
}