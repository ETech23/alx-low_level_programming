#include <stdio.h>

/**
 * main - prints all single digits of base 10
 * Return: 0 success
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
