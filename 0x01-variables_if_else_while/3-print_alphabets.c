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
putchar(ch);
for (ch = 'A' ; ch <= 'Z' ; ch++)
putchar(ch);
putchar('\n');
return (0);
}
