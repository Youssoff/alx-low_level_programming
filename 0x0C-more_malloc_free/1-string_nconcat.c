#include "main.h"
/**
 * string_nconcat - concatinates 2 strings
 * @s1: first str
 * @s2: second str
 * @n: no of chars to be concatinated
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *m;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		m = malloc(sizeof(char) * (len1 + n + 1));
	else
		m = malloc(sizeof(char) * (len1 + len2 + 1));
	while (i < len1)
	{
		m[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		m[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		m[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
