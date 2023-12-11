#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locate the first occurrence in a string of any characters in another string
 * @s: The string to search
 * @accept: The set of characters to search for
 *
 * Return: Pointer to the first occurrence of any character in accept in s, or NULL if not found
 */
char *_strpbrk(char *s, const char *accept)
{
    while (*s)
    {
        if (_strchr((char *)accept, *s))
            return s;
        s++;
    }

    return NULL;
}

