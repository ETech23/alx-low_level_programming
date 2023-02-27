#include "main.h"

/**
 * swap_int - the function
 * @a: first input
 * @b: second input
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
