#include "main.h"

/**
 * print_number: its a func prints an integer.
 * @n: its a parameter of func to be print integer.
 * Return: nothing to return.
 */

 void print_number(int n)
 {
    unsigned int num;
    num = n;

    /*will check if numer is negative*/
    if (n < 0)
    {
	    _putchar('-'); /*print (-) if i get negative num then will negative number*/
	    num = -n;
    }
    if (num / 10 > 0) /*let make an integer divise on 10 we get all nums left and end last no*/
    {
	    print_number(num / 10); /* here we call function to print us whole number at stop to end num right */
    }
    _putchar((num % 10) + '0'); /*then well print each num by a num to end right number bu use num % 10 for example 4 + 48 = 52 << ASCII convert 52 as decimal to see number*/
 }
