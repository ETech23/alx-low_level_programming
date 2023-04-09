#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * unsigned int binary_to_uint(const char *b)-function
 * @const char: input
 * @b: variable
 * Return: 1 if success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;
	char val;

	if (b == NULL)
		return (0);

	while ((val = b[i]) != '\0')
		if (val != '0' && val != '1')
			return (0);

	result = (result << 1) + (val - '0');
	i++;

	return (result);
}
