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
	
	if (size == 0)
		return ('\0');

	i = 0;
	str = malloc(sizeof(char) * size);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
