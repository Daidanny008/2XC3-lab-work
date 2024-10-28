#include <stdio.h>
#include <stdlib.h>

#include "array_utilities.h"

int main() {

    int array[] = {0, 1, 2, 3, 4, 5, 11, 5, 6};
    int size = sizeof(array)/sizeof(array[0]);
    
    puts("TESTING FOR FIND INDEX:\n");
    // two occurence
    printf("\n%d\n", find_index(array, size, 5));

    // more than 1 digit
    printf("\n%d\n", find_index(array, size, 11));

    // end value
    printf("\n%d\n", find_index(array, size, 6));

    // non-existent value
    printf("\n%d\n", find_index(array, size, -6));

    // first value
    printf("\n%d\n", find_index(array, size, 0));

    puts("TESTING FOR FIND POINTER:\n");

    // two occurence
    //printf("%d\n\n", find_pointer(array, size, 5));
    int *a = find_pointer(array, size, 5);
    if (a != NULL) {
        printf("Key %d FOUND %d\n", 5, *a);
    }
    else {
        printf("Key %d NOT FOUND\n", 5);
    }

    // more than 1 digit
    //printf("%d\n\n", find_pointer(array, size, 11));
    a = find_pointer(array, size, 11);
    if (a != NULL) {
        printf("Key %d FOUND %d\n", 11, *a);
    }
    else {
        printf("Key %d NOT FOUND\n", 11);
    }

    // end value
    //printf("%d\n\n", find_pointer(array, size, 6));
    a = find_pointer(array, size, 6);
    if (a != NULL) {
        printf("Key %d FOUND %d\n", 6, *a);
    }
    else {
        printf("Key %d NOT FOUND\n", 6);
    }

    // non-existent value
    //printf("%d\n\n", find_pointer(array, size, -6));
    a = find_pointer(array, size, -6);
    if (a != NULL) {
        printf("Key %d FOUND %d\n", -6, *a);
    }
    else {
        printf("Key %d NOT FOUND\n", -6);
    }

    // first value
    //printf("%d\n\n", find_pointer(array, size, 0));
    a = find_pointer(array, size, 0);
    if (a != NULL) {
        printf("Key %d FOUND %d\n", 0, *a);
    }
    else {
        printf("Key %d NOT FOUND\n", 0);
    }

    puts("TESTING FOR COUNT:\n");

    int barray[] = {5, -4, 12, 23, 5, 2, 2, 5, 1};
    size = sizeof(barray)/sizeof(barray[0]);

    printf("%d\n\n", count(barray, size, 5));
    printf("%d\n\n", count(barray, size, 5));
    printf("%d\n\n", count(barray, size, 0));
    printf("%d\n\n", count(barray, size, 11));

    puts("TESTING FOR COUNT 2D:\n");

    int Carray[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
    };
    size = sizeof(Carray)/sizeof(Carray[0]);
    printf("%d\n\n", count2d(Carray, size, 5));
    printf("%d\n\n", count2d(Carray, size, 1));
    printf("%d\n\n", count2d(Carray, size, 9));

    puts("TESTING FOR ROW AND COLUMN SUMS:\n");

    sums(Carray, size);

    return EXIT_SUCCESS;
}