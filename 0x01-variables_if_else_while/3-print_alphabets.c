#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Prints alphabets
 *
 * Description - Prints alphabets both in lower and uppercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
