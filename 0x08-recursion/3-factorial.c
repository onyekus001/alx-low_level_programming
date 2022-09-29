#include "main.h"
/**
*factorial - check the code.
*@n: character
* Return: Always 0.
*/
int factorial(int n)
{
int fact = 0;
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
fact = n * factorial(n - 1);
return (fact);
}
