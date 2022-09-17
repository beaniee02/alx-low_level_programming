#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints numbers
 *
 * Description: Prints all possible differsnt combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, d;

	for (i = '0'; i < '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			if (i != d)
			{
				putchar(i);
				putchar(d);
				if (i == '8' && d == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
