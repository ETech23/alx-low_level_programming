#include "main.h"

/**
 * _strlen - the function
 * @s: the input
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
