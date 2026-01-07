#include<stdio.h>

int main(){
    struct book{
        char*name;
        char*author;
        float price;
        int pages;
        int year;
        int edition;
    };

    typedef struct book Books;
    Books B[10];

    printf("Size of a book info is = %ld bytes, where,\nSize of char* is = %ld bytes\nSize of float is = %ld bytes\nSize of int is = %ld bytes\n", sizeof(Books), sizeof(char*), sizeof(float), sizeof(int));

return 0;
}