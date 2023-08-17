#include "main.h"

/**
 * prints_sign - prints the sign
 * @n: the
 * Return: 1and prints + if n is greaterthan zero
 * 0 and prints 0 
 * -1 and prints
 */
int print_sign(int n)
{
	if (n > 0){
		_putchar(+);
		return (1);
	} else if (n == 0){
		_putchar(0);
		return (0);
	} else if (n < 0){
		_putchar(-);
		return (-1);
	}
}

