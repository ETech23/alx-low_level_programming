#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints alphabets from a - z
 * Return: 0 success
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
