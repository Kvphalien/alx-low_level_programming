#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string (excluding the null byte)
 */
size_t _strlen(const char *s)
{
    size_t len = 0;

    while (*s)
    {
        len++;
        s++;
    }

    return len;
}

