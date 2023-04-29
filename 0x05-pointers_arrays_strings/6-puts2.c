#include "main.h"
#include <string.h>

/**
  * puts2 - prints a string followed by a new line
  * @str: The string to print
  */
void puts2(char *str)
{
unsigned int i;

	for (i = 0 ; i < strlen(str) ; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
