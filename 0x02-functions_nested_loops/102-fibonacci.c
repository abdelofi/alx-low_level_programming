#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, fib_sum;
    int i;

    printf("%lu, %lu", fib1, fib2);

    for (i = 0; i < 48; i++)
    {
        fib_sum = fib1 + fib2;
        printf(", %lu", fib_sum);
        fib1 = fib2;
        fib2 = fib_sum;
    }

    printf("\n");
    return (0);
}
