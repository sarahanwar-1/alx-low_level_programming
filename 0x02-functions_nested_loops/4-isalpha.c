#include "main.h"

/**
 * _isalpha - checks for alphatic charcter
 * @c: the character
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
