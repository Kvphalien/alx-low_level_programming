#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strcat(char *dest, const char *src)
{
    char *d = dest;

    while (*d)
        d++;

    while (*src)
        *d++ = *src++;

    *d = '\0';

    return dest;
}

