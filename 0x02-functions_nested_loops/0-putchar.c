#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *m = "_putchar\n";

	write(STDOUT_FILENO, m, strlen(m));
	return (0);
}