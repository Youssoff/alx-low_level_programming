#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to be assigned
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	i = 0;
	if (size == 0 || str == NULL)
		return ('\0');
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
