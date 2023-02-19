#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints all the base 16 numbers in lowercase
 * Return: 0 success
 */

int main(void)
{
	int x;
	char y;

	y = 'a';
	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
