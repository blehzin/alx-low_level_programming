#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
					if ((i < j)
					{
						putchar(i + '0');
						putchar(j + '0');
						if (i + j != 18)
						{
							putchar(',');
							putchar(' ');
						}
					}
		}
	}
	putchar('\n');
	return (0);
}
