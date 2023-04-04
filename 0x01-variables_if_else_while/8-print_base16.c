#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 48 ; i < 103 ; i++)
	{
		if (i > 57 && i < 97)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
