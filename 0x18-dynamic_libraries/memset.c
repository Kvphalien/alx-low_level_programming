#include "main.h"
#include <stddef.h>

/**
 * _memset - Fill memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The byte to fill the memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
void *_memset(void *s, int b, size_t n)
{
    unsigned char *p = s;
    unsigned char c = (unsigned char)b;

    while (n--)
        *p++ = c;

    return s;
}

