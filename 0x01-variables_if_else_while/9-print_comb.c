#include <stdio.h>

/**
 * main - Entry point
 * Author : kp
 * Return: Always 0 (Success)
 */
int main(void)
{
	int vim;

	for (vim = 48; vim < 58; vim++)
	{
		putchar(vim);
		if (vim != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
