#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a newline
 */
void print_alphabet(void)
{
  char c;

  for (c = 'a'; c <= 'z'; c++)
  {
    _putchar(c);
  }
  write(1, "\n", 1);
}
