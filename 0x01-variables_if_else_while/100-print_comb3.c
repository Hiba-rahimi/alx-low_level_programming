#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 48 ; i < 57 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			if (((i - 48) * 10 + (j - 48) < ((j - 48) * 10 + (i - 48))))
			{
				putchar(i);
				putchar(j);
			if (i == 56 && j == 57)
				continue;
		putchar (44);
		putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
