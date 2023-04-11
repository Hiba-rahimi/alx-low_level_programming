#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - a funtion that prints all natural numbers from n to 98 ,
  * followed by a new line
  * @n: the parameter n
  * Return: a sequence from n to 98
  */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i < 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
	if (n > 98)
	{
		for (i = n ; i > 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
}
