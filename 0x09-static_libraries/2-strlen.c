#include "main.h"
/**
 * _strlen - counts string length
 * @s: string input
 * Return: Length
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		counter++;
	}
	return (counter);
}
