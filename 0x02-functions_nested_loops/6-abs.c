#include "main.h"
/**
 * _abs - determines absolute value
 * @ab: absolute number
 * Return: 0 absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
