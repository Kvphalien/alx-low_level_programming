#include "main.h"
#include <stddef.h>

/**
 * _strspn - Get the length of a prefix substring
 * @s: The string to search
 * @accept: The set of characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
size_t _strspn(const char *s, const char *accept)
{
    size_t count = 0;

    while (*s && strchr(accept, *s++))
        count++;

    return count;
}

