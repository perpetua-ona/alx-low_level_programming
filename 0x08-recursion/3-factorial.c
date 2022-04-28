#include "main.h"
/**
 * factorial - function to return the factorial of n
 * @n: parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}

	return (0);
}

