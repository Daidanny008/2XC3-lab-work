/* Danny Dai, 400505160,  2024/09/23, 
 * Take one string at a time and print it.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char *word[1000];
    while (true)
    {
        int result = scanf("%s", word);
        if (result == 0)
        {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if (result == EOF)
            break;
        printf("%s\n", word);
    }
    return EXIT_SUCCESS;
}

