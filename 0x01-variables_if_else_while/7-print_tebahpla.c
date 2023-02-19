#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
