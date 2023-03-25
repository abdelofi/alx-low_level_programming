#include "main.h"

/**
 * print_fibonacci - prints the first 98 Fibonacci numbers
 *
 * Return: void
 */
void print_fibonacci(void)
{
    int i;

    for (i = 1; i <= 98; i++)
    {
        if (i == 1)
            _putchar('1');
        else if (i == 2)
            _putchar('2');
        else
        {
            int first = 1, second = 2, next = first + second, j;

            for (j = 3; j <= i; j++)
            {
                first = second;
                second = next;
                next = first + second;
            }

            print_number(next);
        }

        if (i != 98)
        {
            _putchar(',');
            _putchar(' ');
        }
    }

    _putchar('\n');
}

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar(n % 10 + '0');
}
