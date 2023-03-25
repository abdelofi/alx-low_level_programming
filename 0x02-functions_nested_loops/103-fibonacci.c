#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int term1 = 1, term2 = 2, next_term, sum = 2;
while (term2 < 4000000)
{
next_term = term1 + term2;
term1 = term2;
term2 = next_term;
if (term2 % 2 == 0)
{
sum += term2;
}
}
printf("%d\n", sum);
return (0);
}
