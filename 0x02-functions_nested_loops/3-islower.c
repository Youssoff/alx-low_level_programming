#include "main.h"
/**
 * _islower - function to check if char is lowercase
 * @c: char to be checked
 * Return: 1 if char is lowercase
 * 0 if char is not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
