#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate character in string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, int c)
{
    while (*s && *s != (char)c)
        s++;

    return (*s == (char)c ? s : NULL);
}

