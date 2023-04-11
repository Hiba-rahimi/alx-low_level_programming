#include <stdio.h>

/**
  * main - computes the sum of the even fibonacci sequence numbers
  * under 4.000.000 , followed by a new line
  * Return: Nothing
  */

int main(void)
{
unsigned long i, b, c, d, sum;
i = 0;
b = 1;
c = 0;
d = 0;
sum = 0;

while (b + i < 4000000)
{
	c = b;
	d = b + i;
	i = b;
	b = d;
	if (d % 2 == 1)
		sum = sum + d;
}
printf("%lu\n", sum + 1);
return (0);
}
