#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - func that an array of chars, intialize with a specific char
 *
 * Description: Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 *
 * @size: its a size of buffer
 *
 * @c: its a char to be allocate it
 *
 * Return: returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
