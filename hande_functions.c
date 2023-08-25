#include "main.h"

/**
 * _string - function that prints string
 * @arg: parameter
 *
 * Return: an int
 */

int _string(va_list arg)
{
	char *ptr;
	int i;

	i = 0;
	ptr = va_arg(arg, char *);
	while (ptr[i] != '\0')
	{
		write(1, &ptr[i], 1);
		i++;
	}
	return (i);
}


/**
 * _char - function that print character
 * @arg: parameter
 *
 * Return: an int
 */

int _char(va_list arg)
{
	int c, i;

	i = 0;
	c = va_arg(arg, int);
	write(1, &c, 1);
	i++;
	return (i);
}

/**
 * _decimal - function that prints the decimal number
 * @arg: parameter
 *
 * Return: an int
 */

int _decimal(va_list arg)
{
	int nb, count;

	nb = va_arg(arg, int);
	count = to_char(nb, &count);
	return (count);
}
