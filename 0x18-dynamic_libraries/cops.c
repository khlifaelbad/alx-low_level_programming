/**
 * add - adds two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int div(int a, int b)
{
	if (b == 0)
		return 0;
	return (a / b);
}
/**
 * mod - calculates the remainder of two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}

