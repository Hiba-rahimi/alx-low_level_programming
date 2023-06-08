#include "main.h"

/**
  * factorial - it returns the factorial of a given number
  *@n: The number given
  *Return: its factorial
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
		return (factorial(n - 1) * n);
}
