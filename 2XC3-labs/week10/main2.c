// Include standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_utilities.h"


int main(int argc, char *argv[]) {

    char *s = "     hello friend      ";
    char *first, *last;
    find_content(s, &first, &last);
    printf("%c...%c\n", *first, *last);

    s = "     Ivan Ivanovich Chernov      ";
    find_content(s, &first, &last);
    printf("%c...%c\n", *first, *last);

    s = "     Danny Dai      ";
    find_content(s, &first, &last);
    printf("%c...%c\n", *first, *last);

    s = "     abcdefghijklmnopqrstuvwxyz      ";
    find_content(s, &first, &last);
    printf("%c...%c\n", *first, *last);

    // USING , to indicate successfully removed trailing spaces


    printf("%s,\n", (trim("    adbfbiwrbgwrv      ")));
    printf("%s,\n", (trim("    adbfbiw rbgwrv      ")));
    printf("%s,\n", (trim("    hello mr my yesterday      ")));
    printf("%s,\n", (trim("    idk pointers     ")));
    printf("%s,\n", (trim("    pls help     ")));
    printf("%s,\n", (trim("    ya xmbet canadei    ")));


}