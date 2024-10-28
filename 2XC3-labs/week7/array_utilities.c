#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int find_index(int a[], int size, int key) {

    for (int i = 0; i < size; i++) {
        if (a[i] == key) {
            return i;
        }
    }

    return -1;

}

int *find_pointer(int array[], int size, int key) {

    for (int *a = array; a < size + array; a++) {
        if (*a == key) {
            printf("Key %d FOUND %d\n", key, *a);
            return a;
        }
    }

    printf("Key %d NOT FOUND\n", key);
    return NULL;

    /*
    for (int i = 0; i < size; i++) {
        if (a[i] == key) {
            printf("Key %d FOUND %d\n", key, a[i]);
            return &a[i];
        }
    }

    printf("Key %d NOT FOUND\n", key);
    return NULL;
    */

}


int count (int a[], int size, int key) {

    int occurence = 0;
    int *p;

    p = find_pointer(a, size, key);
    if (p == NULL) {
        return 0;
    }
    occurence += 1;
    int move = p - a;
    size -= move;

    while (true) {
        p = find_pointer(p+1, size, key);
        if (p == NULL) {
            break;
        }
        occurence += 1;
        int move = p - a;
        size -= move;
        p += 1;
    }

    return occurence;

}

int count2d (int a[][5], int size, int key) {

    int num = 0;

    for (int i = 0; i < size; i++) {
        num += count(a[i], sizeof(a[i])/sizeof(a[i][0]), key);
    }

    return num;

}

int sums (int a[5][5], int size) {
    int total;

    printf("\nRow totals: ");
    for (int i = 0; i < size; i++) {
        total = 0;
        for (int j = 0; j < size; j++) {
            total += a[i][j];
        }
        printf("%d ", total);
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < size; i++) {
        total = 0;
        for (int j = 0; j < size; j++) {
            total += a[j][i];
        }
        printf("%d ", total);
    }

    puts("");

}


