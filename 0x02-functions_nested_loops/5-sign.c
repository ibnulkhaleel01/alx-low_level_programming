#include "main.h"

/*
 * print_sign - prints sign based on condition
 * @n: an argument passed
 * Return: returns 1, 0 and -1 based on condition
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		-putchar('-');
		return (-1);
	}
}
