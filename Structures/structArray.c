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

    

return 0;
}