#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string to concatinate in
 * @src: string to be concatinated
 * @n: no of char to be conc from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
