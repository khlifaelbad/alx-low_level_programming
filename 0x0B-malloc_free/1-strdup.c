#include "main.h"
#include <stdlib.h>

/**
 * str_len - that a func counts length of a string in bytes
 *
 * @str: its pointer to the string
 *
 * Return: return a length of string bytes (excluding '\0')
 */
int str_len(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * str_cpy - that a func copies a string src to dest
 *
 * @dest: its a buffer of destination where str will be copied
 *
 * @src: its a pointer represent source str to copy
 *
 * Return: returns a pointer to dest
 */
char *str_cpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - that a func duplicates a str using dynamically allocated memry
 * returns a pointer to a newly allocated space memry
 * which contains a copy of the string given as a parameter
 *
 * Description: the strdup() func returns a ptr to a new str
 * which is a duplicate of the str, memry for the new str is obtained with
 * malloc, and can be freed with free.
 * On success, the strdup() func returns a pointer to the duplicated string
 * it returns NULL, if insufficient memry was avaible.
 *
 * @str: its a string to be copy
 * Return: a pointer to a new string which is duplicate of str on success
 * returns NULL, if str == NULL.
 */
char *_strdup(char *str)
{
	char *dest;
	int len;

	if (str == NULL)
		return (NULL);
	len = str_len(str) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	str_cpy(dest, str);
	return (dest);
}
