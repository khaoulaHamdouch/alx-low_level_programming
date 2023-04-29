#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - prints a character
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_string - prints a string
 *
 * Return: lenght string
 */
int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
	/*if string is null the out will be "(null)"*/
	print_string("(null)");
	return (6);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * get_num_length : calcs number length
 * Return: lenght number
 */
int get_num_length(int num)
{
	if (num == 0)
		return (0);
	return (1 + get_num_length(num / 10));
}
/**
 * print_number - prints a number
 *
 * Return: number lengh printed
 */
int print_number(int num)
{
    /*INT_MAX : Maximum value for a variable of type int 2147483647*/
	if (num == -2147483648)
	{
	/*make main number small by print 2 first*/
	_putchar('-');
	_putchar('2');
	print_number(147483648);
	return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else if (num < 10)
	{
		_putchar(num + '0');
	}
	return (1);
}
/**
 * _printf - prints s,c,i,d,%
 * Return: count of things written
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;
	va_start(args, format);

	/* if format is empty like : _printf(""); */
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		if (*format == 'c')
		{
		/* va_arg(args, int) it pull the argument passed into it*/
		/*int bcz caracters are ints*/
			char c = va_arg(args, int);
			count += _putchar(c);

		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char *);
			count += print_string(str);

		}
		else if (*format == '%')
		{
			_putchar('%');
			count++;
		}
		else if (*format == 'd' || *format == 'i') /*d and i same thing*/

		{
			int num = va_arg(args, int);
			if (num < 0)
				count++;
			/*count of numbers printed*/
			count += get_num_length(num);
			print_number(num);
		}
		else
		{ /*case of %%% or more*/
			_putchar('%');
			count++;
			if (*format)
			{
				_putchar(*format);
				count++;
			}
		}
		format++;
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	return (count);
}
