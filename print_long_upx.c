#include "main.h"

/**
 * prinlupx - prints a long decimal in hexadecimal
 * @arguments: The character to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int prinlupx(va_list arguments, char *buf, unsigned int ibuf)
{
	long int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, long int);
	isnegative = 0;
	if (int_input == 0)
	{
		bb
