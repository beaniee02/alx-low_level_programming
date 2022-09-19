#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints a string
 * @str: An input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
