#include "main.h"


/**
 * swap_int - swaps the value of two integers
 * @a: an input integer pointer
 * @b: an input integer pointer
 *
 * Return: nothing
 **/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
