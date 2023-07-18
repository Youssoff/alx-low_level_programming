#include <stdio.h>
/**
 * main - outputs a statement
 * Description: 'print for 0 to 9'
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
