#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the last digit of n and prints out whether it is
 * greater than 5, 0, or less than 6
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int Last digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	Last digit = n % 10;
	printf("Last digit of %i is %i and is ", n, Last digit);
	if (Last digit > 5)
		printf("greater than 5\n");
	else if (Last digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
