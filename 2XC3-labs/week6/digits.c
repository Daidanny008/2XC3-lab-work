/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>

/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */

int digits(long n, int *max, int *min) {

    int sum = 0;
    int digit = n%10;
    *max = digit;
    *min = digit;

	while (n > 0) {
        digit = n % 10;
        if (digit < *min) {
            *min = digit;
        }
        if (digit > *max) {
            *max = digit;
        }
        sum = sum + digit;
        n = n / 10;
    }

    return sum;
	
}

