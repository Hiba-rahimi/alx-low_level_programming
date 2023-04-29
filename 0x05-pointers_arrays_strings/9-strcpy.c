#include <string.h>

/**
  * _strcpy - it copies the string pointed by src,to the buffer pointed by dest
  * @src: Points the string to be copied
  * @dest: Points to where the string will be copied
  * Return: The pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
unsigned int i;

for (i = 0 ; i <= strlen(src) ; i++)
{
	dest[i] = src[i];
}
return (dest);
}
