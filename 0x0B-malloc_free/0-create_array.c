#include<stdlib.h>

/**
 *  * create_array - a function ...
 *   * @size: the int
 *    * @c: the char
 *     *
 *      * Return: 1 or 0
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tab = malloc(size * sizeof(char));
	if (tab != NULL)
	{
		for (i = 0; i < size; i++)
			tab[i] = c;
	}
	return (tab);
}
