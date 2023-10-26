#include "main.h"

/**
 * Factorial - function parameter
 *
 * @n: function parameter
 *
 * Return: funtion n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return(1);
	else
		return (n * factorial(n - 1));
}
