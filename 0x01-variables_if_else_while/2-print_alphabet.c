#include <stdio.h>

/**
 * main - printa alphabet in lower case
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
