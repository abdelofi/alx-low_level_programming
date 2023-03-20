#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the lowercase alphabet in reverse,
* followed by a new line.
* Only uses the putchar function twice in the code.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
