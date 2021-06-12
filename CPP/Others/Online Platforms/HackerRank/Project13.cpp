/*Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of the Programmer (the 256th day of the year) during a year in the inclusive range from 1700 to 2700.

From 1700 to 1917, Russia's official calendar was the Julian calendar; since 1919 they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in 1918, when the next day after January 31st was February 14th. This means that in 1918, February 14th was the 32nd day of the year in Russia.

In both calendar systems, February is the only month with a variable amount of days; it has 29 days during a leap year, and 28 days during all other years. In the Julian calendar, leap years are divisible by 4

https://www.hackerrank.com/challenges/day-of-the-programmer/problem */

#include <iostream>
#include <cmath>

int main()
{
    int year;
    int DOP = 256;

    int day_count = 31 + 31 + 30 + 31 + 30 + 31 + 31;

    std::cout << "ENTER YEAR: " << std::endl;
    std::cin >> year;

    if (year >= 1700 && year <= 1917) //julian calender
    {

        if (year % 4 == 0) //leap year
        {
            day_count = day_count + 29;
        }
        else
            day_count = day_count + 28;
    }

    if (year == 1918)
    {
        if (year % 4 == 0) //leap year
        {
            day_count = day_count + 15;
        }
        else
            day_count = day_count + 14;
    }

    if (year >= 1919)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//? this is cond for leap occurence
        {
            day_count = day_count + 29;
        }
        else
            day_count = day_count + 28;
    }

    int day = DOP - day_count;

    if (floor(log10((float)day) + 1) == 1)
    {
        std::cout << "0" << day << ".09." << year;
    }
    else
        std::cout << day << ".09." << year;

    return (0);
}