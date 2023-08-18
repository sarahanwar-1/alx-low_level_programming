# include "main.h"

/**
 * _isdigit - check
 * @x: the num
 * Return: 1 for char 0 for else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
