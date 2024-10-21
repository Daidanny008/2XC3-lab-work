/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "digits.h"

/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */

int main() {
    int min, max, sum;
    long n;

    n = 12343;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 4 && min == 1 && sum == 13) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

