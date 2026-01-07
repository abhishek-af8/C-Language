#include<stdio.h>

int main(){
    struct student{
        // char name[20];

        char*name;
        int class;
        char section;
        int rollNum;
    };
    struct student s1;
    typedef struct student student;
    student s2;

    // s1.name = "Aman Singh";    //in C an array (like s1.name) is not a modifiable 
                                  //lvalue, so you cannot do s1.name = "Aman Singh"; 
                                  //that produces "expression must be a modifiable 
                                  //lvalue".

    // strncpy(s1.name, "Aman Singh", sizeof s1.name - 1);
    // s1.name[sizeof s1.name - 1] = '\0';

    s1.name = "Aman Jain";
    s1.class = 10;
    s1.section = 'D';
    s1.rollNum = 38;

    s2.name = "Darshan Jain";
    s2.class = 10;
    s2.section = 'A';
    s2.rollNum = 14;

    printf("s1.name = %s\ns1.class = %d\ns1.section = %c\ns1.rollNum = %d\n", s1.name, s1.class, s1.section, s1.rollNum);
    printf("\ns2.name = %s\ns2.class = %d\ns2.section = %c\ns2.rollNum = %d\n", s2.name, s2.class, s2.section, s2.rollNum);

return 0;
}