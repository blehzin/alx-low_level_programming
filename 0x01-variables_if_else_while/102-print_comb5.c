#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i1;
	int j1;
	int i;
	int j;

	for (i1 = 48; i1 < 58; i1++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			j1 = i1;
			for (; j1 < 58; j1++)
			{
				for (; j < 58; j++)
				{
					putchar(i1);
					putchar(i);
					putchar(' ');
					putchar(j1);
					putchar(j);
					if (i1 != 57 || j1 != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
