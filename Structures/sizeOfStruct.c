#include<stdio.h>

typedef struct book{
    char*name;
    char*author;
    float price;
    int pages;
    int year;
    int edition;
}Books;

typedef struct student{
    char name;
    int rollNum;
    int class;
}Student;

int main(){

    int padding1 = sizeof(Books)-((2*sizeof(char*))+(1*sizeof(float))+(3*sizeof(int)));

    printf("Size of a book info is = %ld bytes, where,\nSize of char* is = %ld bytes\nSize of float is = %ld bytes\nSize of int is = %ld bytes\nAnd padding is = %d bytes.\n", sizeof(Books), sizeof(char*), sizeof(float), sizeof(int), padding1);

    int padding2 = sizeof(Student)-(sizeof(char)+(2*sizeof(int)));

    printf("\nSize of a student info is = %ld bytes, where,\nSize of char is = %ld bytes\nSize of int is = %ld bytes\nAnd padding is = %d bytes.\n", sizeof(Student), sizeof(char), sizeof(int), padding2);


return 0;
}