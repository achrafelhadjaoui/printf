#include "main.h"

/**
 * u_select - a pointer function
 * @c: compared char
 *
 * Return: an int
 */

int (*u_select(char *c))(va_list)
{
	int i;

	handle_flags flag[] = {
		{"s", _string},
		{"c", _char},
		{"d", _decimal},
		{"i", _decimal},
		{"b", _bnr},
		{"r", affiche_r},
		{NULL, NULL}
	};
	i = 0;

	while (flag[i].s != NULL)
	{
		if (*c == *(flag[i].s))
			return (flag[i].f);
		i++;
	}
	return (0);
}
