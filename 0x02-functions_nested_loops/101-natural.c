#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
inbt main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 3 == 0))
		{
			sum = sum + i;
		}
	}
	prinf("%d\n", sum);
		return (0);
}
