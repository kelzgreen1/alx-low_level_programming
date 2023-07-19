#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    int p = 0;
    char letter;

    while (p < 10)
    {
        alpha = 'a';

        while (alpha <= 'z')
        {
            _putchar(letter);
            alpha++;
        }

        _putchar('\n');
        p++;
    }
}

