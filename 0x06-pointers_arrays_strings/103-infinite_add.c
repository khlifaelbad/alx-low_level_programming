#include "main.h"


/**
 * infinite_add - a func that adds two nums.
 * @n1: a char pointer given by main that represents first number.
 * @n2: a char pointer given by main that represents second number.
 * @r: its the buffer given  by main and that func will use to store the res.
 * @size_r: the size of buffer given by main.
 * Description: a func that adds numbers that are passed str and we add them.
 * Return: return a pointer to the result char *r.
 * A: Measure the length of both `n1` and `n2`.
 * B: Decrease the indices to point to the last digits of `n1` and `n2`.
 * C: Return 0 if the buffer size is smaller than the length of `n1` or `n2`.
 * D: Add the digits starting from the end, and store the result in the buffer.
 * E: Add the digits of `n1` and `n2` at the current indices.
 * F: Break the loop if both indices are negative and the sum is zero.
 * G: Handle overflow by storing the tens digit for the next addition.
 * H: Reverse the buffer to correct the order of the digits.
 * K: Return 0 if the buffer was not large enough to store the result.
 * L: Add a null terminator at the end of the buffer to finish the string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k = 0;
int sum = 0;
int tens = 0;
int start = 0;
int swap = 0;


while (*(n1 + i) != '\0')
i++;
--i;
while (*(n2 + j) != '\0')
j++;
--j;
if ((i > size_r) || (j > size_r))
return (0);
for ( ; k < size_r; i--, j--, k++)
{
sum = tens;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (i < 0 && j < 0 && sum == 0)
break;
tens = sum / 10;
r[k] = sum % 10 + '0';
}
if  (i >= 0 || j >= 0 || sum > 0)
return (0);
r[k] = '\0';
k--;
for ( ; start < k; k--, start++)
{
swap = r[k];
r[k] = r[start];
r[start] = swap;
}
return (r);
}




