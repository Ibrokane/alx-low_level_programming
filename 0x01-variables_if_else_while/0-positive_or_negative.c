#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to print if a random number generated  is
 * negative or positive
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);

	else
		printf("%d is zero\n", n);


	return (0);
}
