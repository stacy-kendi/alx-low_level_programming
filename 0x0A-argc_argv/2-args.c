#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives including first argument
 * print each argument on its own line
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
