#include "main.h"
#include <stdlib.h>
/**
 * str_len - that a func count length of each string
 *
 * @s1: its a first string to be counted
 * @s2: its a second string to be counted
 *
 * Return: length of two string to be returned
 */
int str_len(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	return (i + j);
}
/**
 * str_concat - that a func concatenates two strings
 *
 * Description: The returned pointer should point to a newly allocated space
 * in memory which, contains the contents of s1, followed by the contents
 * of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * allocates two str s1 and s2 and add byte for null terminates
 *
 * @s1: its a first string to be pointed and allocates
 * @s2: its a second string to be pointed and allocates
 *
 * Return: return a two string concatenates byte a byte
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i;
	int j;
	int len;

	i = 0; /* index between each char on s1 and s2*/
	j = 0; /* index on pointer dest to copy s1 and s2 */
	len = 0; /* thats counts bytes of s1 and s2*/
	/*check warnings if *s1 is null as empty and s2 also*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*allocate space memory for str s1 and s2 with add one for null terminate */
	len = str_len(s1, s2) + 1;
	/* allocates memory of pointer that point space for s1 and s2 */
	dest = malloc(len);
	/* check for if allocates memory that failed*/
	if (dest == NULL)
		return (NULL);
	/* started runing on string s1 to copy each char of s1 to dest*/
	while (s1[i])
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	i = 0; /* rest i for index on s2 */
	 /* started runing on string s2 to copy each char of s2 to dest*/
	while (s2[i])
	{
		dest[j] = s2[i];
		i++;
		j++;
	}
	dest[j] = '\0'; /* at end add null terminator*/
	return (dest);
}
