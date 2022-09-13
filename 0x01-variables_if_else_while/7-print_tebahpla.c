#include <stdio.h>

/**
 * main - Entry point
 * author: kp
 * Return: Always 0 (Success)
 */
int main(void)
{
	char vim;

	for (vim = 'z'; vim >= 'a'; vim--)
		putchar(vim);
	putchar('\n');
	return (0);
}
