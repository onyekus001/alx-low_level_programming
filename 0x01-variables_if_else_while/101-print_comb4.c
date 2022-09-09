#include <stdio.h>
/**
*main - Entry point, print 00 to 99 using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
int y;
int z;
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (z = '0'; z <= '9'; z++)
{
if (x < y && y < z)
{
putchar(x);
putchar(y);
putchar(z);
if (!(x == '7' && y == '8' && z == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
