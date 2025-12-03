#include <stdio.h> // Assuming this is needed for printf

int *aFunction(int **p, int **q) {
    printf("**p=%d\n", **p);

    (*p)++;
    *q = *p + 1;

    printf("*p=%d\n", *p);
    printf("*q=%d\n", *q);

    **q = **p - (*p)[-1];

    int *temp = p;
    p = q;
    q = temp;

    return *q - 1;
}

int main(void) {
    int arr[3];

    for (int i = 0; i < 3; i++) {
        arr[2 - i] = 2 * i;
        printf("arr[%u]=%d\n", 2 - i, 2 * i);
    }

    int *curr = &arr[0];
    int *next = NULL;

    curr = aFunction(&curr, &next);

    printf("curr=%d\n", *curr);
    printf("next=%d\n", *next);

    for (size_t i = 0; i < 3; i++) {
        printf("arr[%u]=%d\n", i, arr[i]);
    }
}