#include "main.h"
/**
 * is_printable - check if char is printable
 * @c: char to evaluate
 * Return: 1 if c is printable, 0 if not
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hex_code - Append ascii in hexadecimal to bnuffer
 * @buffer: array 
 * @i: index to start appending from
 * @ascii_code: ascii code
 * Return: 3
 */

int append_hex_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	if ( ascii_code < 0)
	{
		ascii_code *= -1;
	}
	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - check if char is a digit
 * @c: char to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
	if(c >= '0' && c <= '9')
		return (1);


	return 0;
}

/**
 * convert_size_number - casts a number to the specified size
 * @num: number to cast
 * @size: number indicating type to be casted
 * Return: casted value
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsigned - cast no to specified bits
 * @num: number to cast
 * @size: number indicating type to be casted
 * Return: casted value of num
 */

long int convert_size_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size ==S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
