#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: the string
  * Return: The length of s
  */

int _strlen(char *s)
{
int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

