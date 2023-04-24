#include "main.h"
/***** PRINT CHAR ******/

/**
 * print_char - Prints a character
 * @types: Arguments list
 * @buffer: buffer array to handle print
 * @flags: Calc active flags
 * @width: width spec
 * @precision: precision spec
 * @size : size spec
 * Return: number of chars printed
 */

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c. buffer, flags, width, precision));
}

/****PRINT STRING******/
/**
 * print_string - prints a string 
 * @types: arguments list
 * @buffer: buffer array to handle print
 * @flags: calc active flags
 * @width: get width
 * @precision: precision spec
 * @size: size spec
 * Return: num of chars printed
 */

int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int length - 0;
	int i;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
	{
		str = "(null)";
		if (precision > 5)
			str = "     ";
	}

	while (str[length] != '\0')
		length++;

	if (precision >= 0 && length > precision)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], length);
			for (i = width - length; i > 0; i--)
			{
				write(1, " ", 1);
				return (width);
			}
		}
	}

	return (write(1, str, length));
}

/******PRINT PERCENT SIGN*******/
/**
 * print_percent - prints % sign
 * @types: arguments list
 * @buffer: buffer array to handle print
 * @flags: clac active flags
 * @width: get width
 * @precision: precision spec
 * @size: size spec
 * Return: Number of chars
 */

int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
		UNUSED(types);
		UNUSED(buffer);
		UNUSED(flags);
		UNUSED(width);
		UNUSED(precision);
		UNUSED(size);
		return (write(1, "%%", 1));
}

/*******PRINT INTEGER********/
/**
 * print_int - print integer
 * @types: arguments list
 * @buffer: buffer array to print
 * @flags:calculates active flags
 * @width: get width
 * @precision: precision spec
 * @size: size spec
 * Return: number of chars
 */

int print_int(va_list types, char bufer[],
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int number;

	n = convert_sizenumber(n, size);

	if (n == 0)
	{ 
		buffer[i--] = '\0';
	}

	buffer[BUFF_SIZE - 1] = '\0';
	number = (unsigned long int)n;

	if (n < 0)
	{
		number = (unsigned long int)((-1) * n);
		negative = 1;
	}

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		number = number/10;
	}

	i++;

	return (write_number(is_negative, i, buffer, flags, width, precision, size));
}






