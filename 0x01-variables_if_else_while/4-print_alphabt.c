#include <stdio.h>

/**
 * main -alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char alpha[24] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; < 24; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
