#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
	if (n == 0 | n == 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int result = factorial(6);
    printf("%d", result);
    return EXIT_SUCCESS;
}