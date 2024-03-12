#include "main.h"

/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */

void jack_bauer(void)
{
        int time, hour, minute;
        int first_min, second_min;
        int num1, num2;

        for (time = 0; time < 24 * 60; ++time)
        {
        hour = time / 60;
        minute = time % 60;
        if ((first_min = 0 && second_min < 4) || (first_min < 2))
        first_min = hour / 10;
        second_min = hour % 10;
        num1 = minute / 10;
        num2 = minute % 10;
        _putchar(first_min + '0');
        _putchar(second_min + '0');
        _putchar(':');
        _putchar(num1 + '0');
        _putchar(num2 + '0');
        _putchar('\n');
        }
}
