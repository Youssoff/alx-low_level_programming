#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char 'c' to the stdout
 * @c: char to be written
 * Return: For succes always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
