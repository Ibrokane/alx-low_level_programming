#include <stdio.h>

/**
 * main - hexadecimals
 *
 * Return: always 0
 *
 */
int main(void)
{
	char hex[16] = "0123456789abcdef";
	int i;
	int j;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			j = hex[i];
			putchar(j);
		}
		else
		{
			j = hex[i];
			putchar(j);
		}
	}
	puchar('\n');
	return (0);
}
