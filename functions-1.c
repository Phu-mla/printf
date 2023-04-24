#include "main.h"

/*****PRINT UNSIGNED INT*********/
/**
 * print_unsigned - print unsigned number
 * @types: arguments list
 * @buffer: array to handle print
 * @flags: claculates active flags
 * @width: get width
 * @precision: precision spec
 * Return: number of characters printed
 */
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int number = va_args(types, unsigned long int);

	number = convert_size_unsigned(number, size);

	if (num == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';

	while (number > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_unsigned(0, i, buffer, flags, width, precision, size));


		
