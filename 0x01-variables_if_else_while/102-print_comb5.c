#include <stdio.h>
/**
 * main -  description
 *
 * Return: 0
 */
int main(void)
{
	for(int i = 0; i < 100 ; i++){

		putchar((i/10)+'0');
		putchar((i%10)+'0');
		printf("\n");
	}
}

