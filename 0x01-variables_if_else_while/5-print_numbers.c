#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Prints all decimal numbers
 *
 * Description: Prints all decimal numbers from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);
	
	printf("\n");
	return (0);
}
