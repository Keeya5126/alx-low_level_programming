#include <stdio.h>

/**
 * main - Entry point
 * author: kp
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kp;

	for (kp = 'a'; kp <= 'z'; kp++)
	{
		if (kp != 'q' && kp != 'e')
			putchar(kp);
	}
	putchar('\n');
	return (0);
}
