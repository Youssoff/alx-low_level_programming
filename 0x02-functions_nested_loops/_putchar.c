#include <unistd.h>
#include "main.h"
/**
 * _putchar - print char c to stdout
 *@c: the char to print
 * Return: always 1 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
