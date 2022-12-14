#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char i;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	}

	_putchar('\n')
}
