#include "main.h"
#ifndef MAIN_H
#define MAIN_H

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line.
 *
 * Return: void.
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }

    write('\n');
}
