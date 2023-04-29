#include "main.h"
#include <string.h>

/**
  * rev_string - a function that reverses a string
  * @s: The string to reverse
  */

void rev_string(char *s)
{
unsigned int i, j;
char temp;

j = strlen(s) - 1;
	for (i = 0 ; i < j ; i++, j--)
	{
		temp = s[i];
		s[i] = s[j - 1];
		s[j - 1] = temp;
	}
}
