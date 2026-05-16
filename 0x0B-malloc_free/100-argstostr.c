#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_len - that a func counts length of each string as bytes
 *
 * @str: it is string to be counted
 *
 * Return: returns length of string.
 */
int str_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * argstostr - Concatenates all program arguments into a single string.
 * Each argument is separated by a newline character ('\n').
 *
 * @ac: Number of command-line arguments.
 * @av: Array of strings containing the arguments.
 *
 * Return:
 * - Pointer to a newly allocated string containing all arguments
 *   separated by '\n'.
 * - NULL if ac is 0, av is NULL, or memory allocation fails.
 *
 * Description:
 * This function calculates the total memory required to store all
 * arguments, including newline separators and the null terminator.
 * It then dynamically allocates memory, copies each argument into
 * the resulting string, appends a newline after every argument,
 * and finally terminates the string with '\0'.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len;
	int i;
	int j;
	int k;

	len = 0;  /* Total number of bytes required */
	i = 0; /* Index for traversing arguments */
	j = 0; /* Index for traversing characters in each argument */
	k = 0; /* Index for traversing characters in each argument */
	/* check ac == 0 or av is NULL returns NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* count length of each arguments bytes +1 byte for '\n'*/
	while (av[i] != NULL)
	{
		len += str_len(av[i]) + 1;
		i++;
	}
	/* add a one byte for null terminator */
	len += 1;
	str = malloc(len); /* Dynamically allocation memory as bytes use malloc func*/
	if (str == NULL)
		return (NULL); /* check if memory allocation fails */
	i = 0;
	while (ac > i)
	{
		j = 0; /* reset j after each charcter of arguments */
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j]; /* copies each arg into the allocated str*/
			j++;
			k++;
		}
		str[k] = '\n'; /* add newline after each argument */
		k++;
		i++;
	}
	str[k] = '\0'; /* added null terminator at end string*/
	return (str);
}
