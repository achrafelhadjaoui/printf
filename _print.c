#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: is a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	char c;
	int (*selected_function)(va_list), i, result;

	i = 0, result = 0;
	va_start(ptr, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(STDOUT_FILENO, &format[i], 1);
			i++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				write(STDOUT_FILENO, "%", 1);
			}
			c = format[i];
			selected_function = u_select(&c);
			if (selected_function != NULL)
			{
				result = result + selected_function(ptr) - 1;
			}
			i++;
		}
		result++;
	}
	va_end(ptr);
	return (result);
}
