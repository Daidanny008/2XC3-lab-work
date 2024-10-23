#include <stdio.h>
#include <stdlib.h>

int illegalInput(int n) {
    if (n <= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int hailstone(int n) {
	if (n == 1) {
        printf("%d\n", n);
        return 1;
    }
    else {
        printf("%d ", n);
        if (n % 2 == 0) {
            return hailstone(n/2);
        }
        else {
            return hailstone(3*n + 1);
        }
    }
}

int main() {
    int input = 3;

    int result = illegalInput((input));
    if (result == 1) {
        puts("Enter a positive integer.");
        return EXIT_FAILURE;
    }

    result = hailstone(input);

    if (result == 1) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}