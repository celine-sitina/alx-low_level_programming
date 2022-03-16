#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Description:a function that prints the alphabet, in lowercase
 *
 * Return: 0 on Success
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
