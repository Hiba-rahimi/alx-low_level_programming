#include "main.h"
#include <string.h>

/**
  * _puts - prints a string followed by a new line
  * @str: The string to print
  */
void _puts(char *str)
{
int i;

	for (i = 0 ; i < strlen(str) ; i++)
	{
		putchar(str[i]);
	}
putchar('\n');
}
