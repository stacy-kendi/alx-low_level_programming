#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main
 * print the result of the multiplication, followed by a new line
 * assume that the two numbers and result can be stored as integer
 * program does not receive two arguments print error
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 as error
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
