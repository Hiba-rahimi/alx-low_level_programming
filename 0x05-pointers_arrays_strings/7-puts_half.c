#include "main.h"
#include <string.h>

/**
  * puts_half - prints the last half of a string followed by a new line
  * @str: The string to print
  */
void puts_half(char *str)
{
unsigned int i;

if (strlen(str) % 2 == 0)
{
	for (i = (strlen(str)) / 2 ; i < strlen(str)  ; i++)
	{
		putchar(str[i]);
	}
}
else
{
	for (i = (strlen(str) - 1) / 2 ; i < strlen(str) - 1  ; i++)
	{
		putchar(str[i + 1]);
	}
}
_putchar('\n');
}
