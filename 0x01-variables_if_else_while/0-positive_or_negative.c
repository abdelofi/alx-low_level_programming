#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;

        srand(time(NULL)); /* Seed the random number generator */
        n = rand() - RAND_MAX / 2; /* Generate a random number and store it in 'n' */

        /* Check if 'n' is positive, negative or zero and print the appropriate message */
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);

        return (0);
}
