/* Danny Dai, 400505160, 2024/09/23
 * read wc output and calculate average line length to 1 decimal place
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declare number of chars, number of lines
    double total = 0, lines = 0, value = 0;

    // Get nums 3 times
    for (int i = 0; i < 3; i++)
    {
	// Get input
        int result = scanf("%d", &value);

	// Check bad input
        if (result == 0)
        {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if (result == EOF)
            break;

	// Add value
        if (i == 0) {
		lines = value;
	}
	else if (i == 2) {
		total = value;
	}
        
    }

    // Return average - 1 for newline counted
    printf("%.1f\n", total/lines - 1);
    return EXIT_SUCCESS;
}
