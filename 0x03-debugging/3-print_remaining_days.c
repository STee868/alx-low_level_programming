#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);

		return();
	}

	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days = 0;

	for (int i = 1; i < month; i++)
	{
		days += days_in_month[i];
	}
	days += day;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2)
		{
			days++;
		}
	}
	if (month == 2 && day == 29 && !(year % 4 == 0 && year % 100 != 0) && year % 400 != 0)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return();
	}
	printf("Day of the year: %d\n", days);
	printf("Remaining days: %d\n", (days > 365 || (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 366 - days : 365 - days);
}
