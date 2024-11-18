// Include standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_utilities.h"

#define INPUT_SIZE 100


// USING , to indicate successfully removed trailing spaces

int main(int argc, char *argv[]) {

    char input[INPUT_SIZE+1];
    while (fgets(input, INPUT_SIZE, stdin)) {
        printf("%s,\n", to_upper(trim(input)));
        printf("%s,\n", to_lower_pure(trim(input)));
    }

    return EXIT_SUCCESS;

}