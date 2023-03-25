#include "main.h"

/**
 * fibonacci - Prints the first 98 Fibonacci numbers.
 */
void fibonacci(void)
{
    int i;
    unsigned long num1 = 1, num2 = 2, fib;

    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');
    _putchar(',');
    _putchar(' ');

    for (i = 0; i < 96; i++)
    {
        fib = num1 + num2;
        _putchar(fib / 1000000000 + '0');
        _putchar(fib / 100000000 % 10 + '0');
        _putchar(fib / 10000000 % 10 + '0');
        _putchar(fib / 1000000 % 10 + '0');
        _putchar(fib / 100000 % 10 + '0');
        _putchar(fib / 10000 % 10 + '0');
        _putchar(fib / 1000 % 10 + '0');
        _putchar(fib / 100 % 10 + '0');
        _putchar(fib / 10 % 10 + '0');
        _putchar(fib % 10 + '0');

        if (i != 95)
        {
            _putchar(',');
            _putchar(' ');
        }

        num1 = num2;
        num2 = fib;
    }

    _putchar('\n');
}
