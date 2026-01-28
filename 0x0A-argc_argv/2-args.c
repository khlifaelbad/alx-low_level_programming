#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 *
 * Description: All arguments should be printed, including the first one
 * 		only print one arg per line, ending with a new line
 * @argc: 
 * @argv: its array an argument line command to be printed
 *
 * Return: Always 0 (Success)
 */
int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	(void) argc;
	/*while (*(argv+i) != NULL)*/
	/*{*/
		/*printf("%s\n", argv[i++]);*/
	/*}*/
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j++]);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
