#include <stdio.h>
/**
*main - Entry point, print 00 to 99 using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (!(x == '9'))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
