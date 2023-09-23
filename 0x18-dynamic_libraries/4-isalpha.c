#include "main.h"

/**
 * _isalpha - Checks is a letter lowercasen or uppercase
 * @c: Description of parametre c
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

