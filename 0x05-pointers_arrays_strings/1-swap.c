#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: the value of 1st parameter
  * @b: the value of 2nd parameter
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
