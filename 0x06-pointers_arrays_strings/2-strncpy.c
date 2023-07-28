#include "main.h"
/**
 * _strncpy - copy a string in src to dest
 * @dest: destination to copy there
 * @src: string to be copied
 * @n: no of chars to be copied
 * Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
