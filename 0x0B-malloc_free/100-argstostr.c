#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _strlen - returns the length of a given string
*
*
* @s: string to check the length of
* Return: returns the length of the string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
return (i);
}
/**
* _strcat - concat strings, src appended to dest
*
* @dest: destination string
* @src: source string
* Return: returns finished string
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
dest[i++] = src[j++];
dest[i] = '\0';
return (dest);
}
/**
* argstostr - concats together program arguments into one string
*
*
* @ac: argument count
* @av: arguments
* Return: returns pointer to completed string
*/
char *argstostr(int ac, char **av)
{
char *string;
int len, i;
if (ac == 0 || av == NULL)
return (NULL);
len = 1;
i = 0;
while (i < ac)
{
len += _strlen(av[i]) + 1;
i++;
}
string = malloc(len *sizeof(char));
if (string == NULL)
return (NULL);
i = 0;
while (i < ac)
{
_strcat(string, av[i++]);
_strcat(string, "\n");
}
if (!string)
return (NULL);
return (string);
}
