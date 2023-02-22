#include "main.h"
/**
 * _islower - checks for lowercase alphabet
 * @c: single letter input
 * Return: 1 or 2
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

