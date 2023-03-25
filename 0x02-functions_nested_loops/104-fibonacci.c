#include "main.h"

/**
 * print_fibonacci - prints the first 98 Fibonacci numbers
 *
 * Return: void
 */
void print_fibonacci(void)
{
    int i;
    unsigned long int num1 = 1, num2 = 2, sum;

    _putchar('1');
    for (i = 2; i <= 98; i++)
    {
        _putchar(',');
        _putchar(' ');
        _putchar(num2 / 1000000000 + '0');
        _putchar((num2 / 100000000) % 10 + '0');
        _putchar((num2 / 10000000) % 10 + '0');
        _putchar((num2 / 1000000) % 10 + '0');
        _putchar((num2 / 100000) % 10 + '0');
        _putchar((num2 / 10000) % 10 + '0');
        _putchar((num2 / 1000) % 10 + '0');
        _putchar((num2 / 100) % 10 + '0');
        _putchar((num2 / 10) % 10 + '0');
        _putchar(num2 % 10 + '0');
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    _putchar('\n');
}
}
