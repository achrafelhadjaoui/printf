#include "main.h"

/**
 * _putchar - a function
 * @c: param
 *
 * Return: an int.
 */

int _putchar(char c)
{
	int i;

	i = 1;
	write(STDOUT_FILENO, &c, 1);
	return (i);
}


/**
 * to_char - function that pritnts numbers
 * @nb: parameter
 * @count: second parameter
 *
 * Return: an int
 */

int to_char(int nb, int *count)
{
	unsigned int n1;
	char c;

	if (nb < 0)
	{
		*count += _putchar('-');
		n1 = -nb;
	}
	else
		n1 = nb;


	if (n1 / 10)
		to_char(n1 / 10, count);
	c = ((n1 % 10) + '0');
	*count += _putchar(c);
	return (*count);
}
