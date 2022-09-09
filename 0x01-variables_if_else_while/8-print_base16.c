#include <stdlib.h>
#include <stdio.h>
/**
* main - base16 lowercase letters
* Return: success-0
*/
int main(void)
{
int i;
char y;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
