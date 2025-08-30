#include "main.h"

/**
 * wildcmp - that a func compares two strings.
 *
 * @s1: its a first string to be compares.
 * @s2: its a first string to be compares.
 *
 * Desription: these steps for wildcards compares
 * 1. base case if strings both end then means matched.
 * 2. check if strings s1, s2 doesn't matches and s2 not contains '*'.
 * 3. check that string s1 still and string s2 end wihout to compare with.
 * 4. here if we contain '*' inside string s2.
 * 5. check '*' as empty return 1.
 * 6. check '*' to match one or more char from s1 return 1.
 * 7. else no match found then return 0.
 * Return: return 1 if that string can be identical otherwise return 0.
 */
int	wildcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
		return (1);
	if ((*(s1 + i) !=  *(s2 + i)) && *(s2 + i) != '*')
		return (0);
	if ((*(s1 + i) != '\0') && (*(s2 + i) == '\0'))
		return (0);
	if (*(s2 + i) == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*(s1 + i) != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (0);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
