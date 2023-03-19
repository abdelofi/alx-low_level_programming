#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase,
 * followed by a new line.
 * Only uses the putchar function three times in the code.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
    for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);

    putchar('\n');

    return (0);
}
