#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int a = 1, b = 2, c;
_putchar('1');
for (i = 2; i <= 98; i++)
{
_putchar(',');
_putchar(' ');
_putchar(a + '0');
c = a + b;
a = b;
b = c;
}
_putchar('\n');
return (0);
}
