#include <stdio.h>

/**
 * main - Entry point
 * Author: kp
 * Return: Always 0 (Success)
 */
int main(void)
{
	int vim;
	char miv;

	for (vim = 48; vim < 58; vim++)
		putchar(vim);
	for (miv = 'a'; miv <= 'f'; miv++)
		putchar(miv);
	putchar('\n');
	return (0);
}
