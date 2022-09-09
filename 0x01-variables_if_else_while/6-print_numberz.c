#include <stdio.h>
/**
* main - single digits
* Return: last digit
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
