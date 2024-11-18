// Include standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* to_upper(char text[]) {

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 97 && text[i] <= 122) {
            text[i] -= 32;
        }
    }

    return text;
    
}

char* to_lower_pure(char text[]) {

    char *copy = malloc((strlen(text)+1)*sizeof(char));

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 65 && text[i] <= 90) {
            copy[i] = text[i] + 32;
        }
        else {
            copy[i] = text[i];
        }
    }

    free(text);

    return copy;
}

void find_content(char *text, char **first, char **last) {

    *first = NULL;
    *last = NULL;


    for (; text < text + strlen(text); text++) {
        if (*text != '\t' && *text != ' ' && *text != '\n') {
            if (*first == NULL) {
                *first = text;
            }
            else {
                *last = text;
            }
        }
    }

}

char* trim(char *text) {

    char *first, *last;
    find_content(text, &first, &last);

    char *copy = malloc((strlen(text)+1)*sizeof(char));

    int i = 0;
    for(; first < first + strlen(text); first++) {
        copy[i] = first[0];
        i+=1;
        if (first == last) {
            break;
        }
    }

    return copy;



}
