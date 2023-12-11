#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to the destination buffer (dest)
 */
char *_strcpy(char *dest, const char *src)
{
    char *d = dest;

    while ((*d++ = *src++))
        ;

    return dest;
}

