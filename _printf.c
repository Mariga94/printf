#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: 0 Always for Success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j;
	int display = 0; /*displays the amount of characters printed*/
	char c, *s;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
			display++;
		else
			if (format[i + 1] == 'c')
				i++;
				c = va_arg(args, int);
				_putchar(c);
				display++;

			else if (format[i + 1] == 's')
				i++;
				s = va_arg(args, char *);
				for (j = 0; s[j] != '\0'; j++)
					_putchar(s[j]);
					display++;

			else if (format[i + 1] == '%')
				i++;
				_putchar('%');
				display++;
		i++;
	}
	va_end(args);
}
