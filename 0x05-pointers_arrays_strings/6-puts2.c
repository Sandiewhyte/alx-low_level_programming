#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: type
 * Return: void which means it is correct
 *
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}

	_putchar('\n');
}
