#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet from a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
	/* implementation code */
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
