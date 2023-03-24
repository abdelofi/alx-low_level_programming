#include "main.h" // include the header file that contains the function prototype

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a newline
 */
void print_alphabet(void)
{
  char c; // declare a variable to store each character of the alphabet

  // iterate over each character of the alphabet from 'a' to 'z'
  for (c = 'a'; c <= 'z'; c++)
  {
    _putchar(c); // print the current character to the standard output
  }

  // print a newline character to the standard output
  write(1, "\n", 1);
}
