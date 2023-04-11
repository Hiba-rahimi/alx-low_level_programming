#include <stdio.h>

/**
  * main - prints the first 50 fibonacci numbers ,
  * starting with 1 and 2 ,
  * Return: Nothing
  */

int main(void)
{
int count = 0;
unsigned long i, b, c, d;
i = 0;
b = 1;
c = 0;
d = 0;

while (count < 50)
{
	printf("%lu", b + i);
	c = b;
	d = b + i;
	i = b;
	b = d;
	count++;
	if (count == 50)
		continue;
	printf(", ");
}
printf("\n");
return (0);
}
