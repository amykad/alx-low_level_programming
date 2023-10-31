#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 * Return: dest
 */

char *_strncpy(char *dest, const char *src, int n)
{
int j = 0; // Changed "J" to "j"

while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}

while (j < n)
{
dest[j] = '\0';
j++;
}
return dest;
}
