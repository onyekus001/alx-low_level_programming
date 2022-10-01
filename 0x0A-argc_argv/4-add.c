#include <stdio.h>
#include <stdlib.h>
/**
* checkString - check the code.
*@Str: character count
* Return: Always 0.
*/
int checkString(char *Str)
{
char *ptr = Str;
while (*ptr)
{
if (!(*ptr >= 0x30 && *ptr <= 0x39))
{
return (0);
}
ptr++;
}
return (1);
}
/**
* main - check the code.
*@argc: character count
*@argv: array
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int sum, i;
sum = 0;
if (argc < 1)
{
printf("0\n");
return (1);
}
i = 1;
while (i < argc)
{
if (checkString(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);
return (0);
}
