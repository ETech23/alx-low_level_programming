#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse order
 * Return: 0 success
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
