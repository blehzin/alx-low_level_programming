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
	int i = 0;

	while (i < 100)
	{
		if (i / 10 < i % 10)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');

		if (i < 89)
		{
			putchar(',');
		}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
