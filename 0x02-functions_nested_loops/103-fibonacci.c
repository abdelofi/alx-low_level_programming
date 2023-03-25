#include <stdio.h>
/**
 * main - prints the sum of even Fibonacci numbers whose values do not
 * exceed 4,000,000
 * Return: Always 0
 */
int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 0;
while (fib_sum <= 4000000)
{
fib_sum = fib1 + fib2;
fib1 = fib2;
fib2 = fib_sum;
if (fib_sum % 2 == 0)
even_sum += fib_sum;
}
printf("%lu\n", even_sum);
return (0);
}
