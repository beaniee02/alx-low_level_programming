#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Prints alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
		putchar(reverse);
	putchar('\n');
	return (0);
}
