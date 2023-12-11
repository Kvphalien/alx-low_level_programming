#include "main.h"
#include <unistd.h>

/**
 * _puts - Write a string to standard output
 * @s: The string to write
 */
void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

