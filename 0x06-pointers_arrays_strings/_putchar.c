#include "main.h"
#include <unistd>

/**
 * _putchar - writes
 * @c: the char
 *
 * Return: on success 1
 * On error, -1
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
