#include<stdio.h>

int main(){

    int numBook;
    struct book{
        char name[50];
        float price;
        int pages;
        int edition;
    };

    typedef struct book Books;

    printf("Enter the total number of books you wanna log : ");
    scanf("%d", &numBook);

    Books B[numBook];

    for(int i = 0; i<numBook; i++){
        printf("Enter details for Book %d : ", i+1);
        printf("\nName of Book %d : ", i+1);
        scanf(" %[^\n]", B[i].name);                //%s just reads one word and as soon as it encounters a space, it stops reading. 
                                                    //so if you entered "Discrete Maths", it reads "Discrete " and "Maths" remains in the input buffer. Now when the "next scanf" which asks for a float gets "Maths " because ot is in the buffer, it doesn't accepts it. Similarly "all the scanf's" reject this cuz they are expecting different data types.
                                                    //That is why the whole iteration just silently terminates and when we move to the next iteration, there the first scanf which is expecting a string accepts "Maths" and you are directly asked an input for the price.
                                                    //By using " %[^\n]", you tell the scanf to first of all ignore any leading whitespace or newline char ('\n') else it will just assume that the name is empty if it reads a spece of newline.
                                                    //Now, %[ starts the reading
                                                    //^\n tells the scanf that "read everything that is not(^) a newline (\n)"
                                                    //] ends the reading.

                                                    //At higher levels we will be using library functions to do this like fgets() or getchar().
        printf("Price of Book %d : ", i+1);
        scanf("%f", &B[i].price);
        printf("Pages in Book %d : ", i+1);
        scanf("%d", &B[i].pages);
        printf("Edition of Book %d : ", i+1);
        scanf("%d", &B[i].edition); 
        printf("\n");
    }

    for(int i = 0; i<numBook; i++){
        printf("Book %d:\nName : %s\nPrice : %.2f\nPages : %d\nEdition : %d\n", i+1, B[i].name, B[i].price, B[i].pages, B[i].edition);
        printf("\n");
    }

return 0;
}