#include "main.h"
/**
 * _memset - set some chars to a memory location
 * @s: memory of chars to stored in
 * @b: char to fill by
 * @n: no. of chars to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
