#include <stdlib.h>
#include <stdio.h>
/**
* main - lowercase and uppercase letters
* Return: success-0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
