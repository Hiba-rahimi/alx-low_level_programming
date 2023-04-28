#include "main.h"
#include <string.h>

/**
  * print_rev - prints a string in reverse followed by a new line
  * @str: The string to print in reverse
  */
void print_rev(char *str)
{
int i;

	for (i = strlen(str) - 1 ; i >= 0 ; i--)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}

