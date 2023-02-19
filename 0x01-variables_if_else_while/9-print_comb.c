#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ",", followed by a space
 * Numbers should be printed in ascending order with two digits
 * the two digits must be different
 * print only the smallest combination of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(' ');
		putchar('.');
	}
	return (0);
}
