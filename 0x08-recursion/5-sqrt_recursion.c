#include "main.h"
/**
*sqrt_1 - check the code.
*@n: character
*@c: character
* Return: Always 0.
*/
int sqrt_1(int n, int c)
{
int sqrt;
sqrt = c * c;
if (n - sqrt == 0)
return (c);
else if (n < sqrt)
return (-1);
return (sqrt_1(n, ++c));
}
/**
*_sqrt_recursion - check the code.
*@n: character
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (sqrt_1(n, 2));
}
