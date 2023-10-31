#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - Find the first occurrence of any character in 'accept' in 's'.
 * @s: The string to search in.
 * @accept: The characters to search for.
 * Return: A pointer to the first matching character, or NULL if not found.
 */

char *_strpbrk(char *s, char *accept);

char *_strpbrk(char *s, char *accept)

{
while (*s)
{
for (int k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
return s;
}
}
s++;
}
return NULL;
}
