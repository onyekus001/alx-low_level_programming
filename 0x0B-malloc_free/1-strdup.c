#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - point new allocated pointer
* @str: string
* Return: pointer
*/
char *_strdup(char *str)
{
int str_size;
int i;
char *p;
str_size = 0;
if (str == 0)
return (0);
while (str[str_size] != '\0')
{
str_size++;
}
str_size++;
p = malloc(str_size *sizeof(char));
if (p == 0)
return (0);
i = 0;
while (str[i] != '\0')
{
p[i] = str[i];
i++;
}
p[i] = '\0';
return (p);
}
