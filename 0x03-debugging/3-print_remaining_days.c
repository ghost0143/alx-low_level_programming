#include <stdio.h>
#include "main.h"

/**
 * convert_day - converts day of month to day of year, taking leap year into account
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day)
{
    int dayOfYear;

    switch (month)
    {
        case 1:
            dayOfYear = day;
            break;
        case 2:
            dayOfYear = 31 + day;
            break;
        case 3:
            dayOfYear = 59 + day;
            break;
        case 4:
            dayOfYear = 90 + day;
            break;
        case 5:
            dayOfYear = 120 + day;
            break;
        case 6:
            dayOfYear = 151 + day;
            break;
        case 7:
            dayOfYear = 181 + day;
            break;
        case 8:
            dayOfYear = 212 + day;
            break;
        case 9:
            dayOfYear = 243 + day;
            break;
        case 10:
            dayOfYear = 273 + day;
            break;
        case 11:
            dayOfYear = 304 + day;
            break;
        case 12:
            dayOfYear = 334 + day;
            break;
        default:
            dayOfYear = -1;
            break;
    }

    return dayOfYear;
}

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
    int dayOfYear = convert_day(month, day);
    int leapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    if (dayOfYear > 365 || (leapYear && dayOfYear > 366))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        printf("Day of the year: %d\n", dayOfYear);
        printf("Remaining days: %d\n", leapYear ? 366 - dayOfYear : 365 - dayOfYear);
    }
}
