#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lowercase,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
