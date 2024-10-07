#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("%s", "How many days this month? ");
	int days;
	scanf("%d", &days);

	printf("%s", "What's the starting day (1=Monday, 7=Sunday)? ");
        int weekNum;
	scanf("%d", &weekNum);

	printf("\n%3s%3s%3s%3s%3s%3s%3s\n", "M", "T", "W", "T", "F", "S", "S");

	//printf("%d", days);
	//printf("%d", weekNum);

	for (int i=1; i<weekNum; i++) {
		printf("%3s", "");
	}

	for (int j=1; j<=days; j++) {
		printf("%3d", j);
		if ((weekNum-1+j)%7 == 0) {
			printf("\n");
		}
	}

	puts("");

	return EXIT_SUCCESS;

}
