#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Prints numbers
 *
 * Description: Prints all possible combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, d, n;

	for (i = '0'; i < '8'; i++)
	{
		for (d = i + 1; d <= '8'; d++)
		{
			for (n = d + 1; n <= '9'; n++)
			{
				if ((i != d) != n)
				{
					putchar(i);
					putchar(d);
					putchar(n);

					if (i == '7' && d == '8' && n == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
