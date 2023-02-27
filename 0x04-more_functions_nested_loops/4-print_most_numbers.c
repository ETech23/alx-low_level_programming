#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the required numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	char c;
	for (c >= '0' && c <='9' && (c != '2'; c != '4') c++)
		putchar(c);
	putchar('\n');
}
