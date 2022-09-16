#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Prints alphabets
 *
 * Description: Prints all alphabets except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha, e, q;

	e = 'e';
	q = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != e && alpha != q)
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
