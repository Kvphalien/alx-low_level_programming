#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, const char *needle)
{
    size_t needle_len = _strlen(needle);

    while (*haystack)
    {
        if (_strncmp(haystack, needle, needle_len) == 0)
            return haystack;
        haystack++;
    }

    return NULL;
}

