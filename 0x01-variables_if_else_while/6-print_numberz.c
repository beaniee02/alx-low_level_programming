#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Print numbers using char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
