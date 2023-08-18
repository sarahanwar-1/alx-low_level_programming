/*
 * File: 101-natu
 * Auth: vincent
 */

#include <stdio.h>

/**
 * main - Lists all
 *
 * Return: Always
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
