#include <stdio.h>
#include <stdlib.h>

int main() {

	int year = -1;
        int month = -1;
	int day = -1;	
	int cur_year, cur_month, cur_day;
	do {
		printf("%s ", "Enter a date (mm/dd/yyyy):");
		scanf("%d /%d /%d", &cur_month, &cur_day, &cur_year);
		
		if (cur_year == 0 && cur_month == 0 && cur_day == 0) {
		} else if (cur_day < 1 || cur_day > 31 || cur_month < 1 || cur_month > 12) {
			printf("%s\n", "Date Rejected.");
		} else if (year == -1) {
			year = cur_year;
			month = cur_month;
			day = cur_day;		
		} else if (cur_year < year) {
			year = cur_year;
                        month = cur_month;
                        day = cur_day;
		} else if (cur_year == year) {
			if (cur_month < month) {
				month = cur_month;
                        	day = cur_day;
			} else if (cur_month == month) {
				if (cur_day < day) {
					day = cur_day;
				}
			}
		}

	} while (!(cur_year == 0 && cur_month == 0 && cur_day == 0));
	
	if (year == -1) {
		puts("No appropriate dates entered");
	} else {
		printf("\n%s%d/%d/%d.\n", "The earliest valid date is ", month, day, year);
	}
}
