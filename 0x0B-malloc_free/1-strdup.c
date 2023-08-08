#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: original source of str
 * Return: a pointer to the duplicated string on succes, null on failure
 */
char *_strdup(char *str)
{
	char *t;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	t = malloc(sizeof(char) * (i + 1);
	if (t == NULL)
		return (NULL);

	for (; r < i; r++)
	{
		t[r] = str[r];
	}
	return (t);
}
