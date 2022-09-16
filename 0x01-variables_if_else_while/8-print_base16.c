#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Prints numbers in hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char base;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (base = 'a'; base <= 'f'; base++)
		putchar(base);
	putchar('\n');
	return (0);
}
