#include <stdio.h>

/**
 * main - prints all digits of base 10 using putchar
 * Return: 0 success
 */

int main(void)
{
	int x = 0;

	for (x = 0; x < 10;)
	{
		putchar((x % 10) + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
