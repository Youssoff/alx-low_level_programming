#include "main.h"
/**
 * _strcat - concatinates two strings
 * @dest: the destination string that we concatinate 2 strs in
 * @src: string to be concatinated
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
