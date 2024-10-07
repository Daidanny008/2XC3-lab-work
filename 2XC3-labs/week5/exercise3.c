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
	
	switch(year) {
		case -1:
			puts("No appropriate dates entered");
		default:
			switch(month) {
				case 1:
					printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "January", year);
					break;
				case 2:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "February", year);
					break;
				case 3:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "March", year);
					break;
				case 4:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "April", year);
					break;
				case 5:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "May", year);
					break;
				case 6:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "June", year);
					break;
				case 7:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "July", year);
					break;
				case 8:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "August", year);
					break;
				case 9:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "September", year);
					break;
				case 10:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "October", year);
					break;
				case 11:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "November", year);
					break;
				case 12:
                                        printf("\n%s%d %s, %d.\n", "The earliest valid date is ", day, "December", year);
					break;
			}
	}
}
