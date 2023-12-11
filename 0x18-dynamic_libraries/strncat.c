#include "main.h"

/**
 * _strncat - Concatenate two strings, but use at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strncat(char *dest, const char *src, size_t n)
{
    char *d = dest;

    while (*d)
        d++;

    while (n-- && *src)
        *d++ = *src++;

    *d = '\0';

    return dest;
}

