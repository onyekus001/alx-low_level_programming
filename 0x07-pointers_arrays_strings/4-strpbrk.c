#include "main.h"
/**
* _strpbrk -check character in a string
*
*@s: source
*@accept: character
*Return: number of characters
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return (0);
}
