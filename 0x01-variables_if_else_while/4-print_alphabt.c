#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase,
* except for q and e, followed by a new line.
* Only uses the putchar function twice in the code.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
