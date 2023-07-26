#include "main.h"
/**
 * print_array - print no of elements in an array
 * @n: no of elements to be printed
 * @a: array to work on
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
