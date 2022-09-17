#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Prints numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, d;

	for (i = '0'; i <= 98; i++)
	{
		for (d = '0'; d <= 99; d++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (i == 98 && d == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
