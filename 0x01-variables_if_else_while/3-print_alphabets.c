#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints lowercase and uppercase alphabets
 * Return: 0 success
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
