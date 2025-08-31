#include "main.h"

/**
 * ft_strlen - that a func count length of string.
 *
 * @s: its a string to be counted.
 *
 * Return: return a length of string.
 */
int	ft_strlen(char *s)
{
	if(*s == '\0')
		return (0);
	return (1 + ft_strlen(s + 1));
}
/**
 * is_palindrome_helper - recursive func that compares two char of string.
 *
 * @s: pointer to the string being checked.
 * @i: index from start of the string.
 * @j: index from the end of the string.
 *
 * Return: 1 if the substring between i and j is a palindrome,
 * 0 if not.
 */
int	is_palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	/*compare first charcter to the last character*/
	if (*(s + i) != *(s + j))
		return (0);
	return (is_palindrome_helper(s, i + 1, j - 1));
}
/**
 * is_palindrome - that a func check a string a palindrome
 *
 * @s: its a length of string to be counted.
 *
 * Return: return 1 if a palindrome, return 0 if not.
 */
int	is_palindrome(char *s)
{
	int	j;

	j = 0;
	if (*s == '\0')
		return (1);
	j = ft_strlen(s);
	return (is_palindrome_helper(s, 0, j - 1));
}
