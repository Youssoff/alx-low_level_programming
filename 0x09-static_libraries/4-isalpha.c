#include "main.h"
/**
 * _isalpha - checks if char is a letter
 * @c: char to be checked
 * Return: 1 if char is a letter, else 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
