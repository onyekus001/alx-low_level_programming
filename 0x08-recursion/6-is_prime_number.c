#include "main.h"
/**
* prime - checks number is prime
* @a:  check
* @j:  prime number
*
* Return: 1 if prime, 0 if not
*/
int prime(int a, int j)
{
if (j < 2 || j % a == 0)
return (0);
else if (a > j / 2)
return (1);
else
return (prime(a + 1, j));
}
/**
* is_prime_number - states if number is prime
* @n: number to check
*
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (prime(2, n));
}
