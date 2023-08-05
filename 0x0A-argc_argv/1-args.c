#include <stdio.h>
#include "main.h"

/**
 * main - prints no of args
 * @argc: no of args
 * @argv: pointers to an array of strings for the values of arg
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
