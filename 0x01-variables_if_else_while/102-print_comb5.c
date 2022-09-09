#include <stdio.h>
/**
* main - prints all possible different combinations of two digits.
* Return: Always 0 (Success)
*/
int main(void)
{
int ones = '0';
int tens = '0';
int tens2 = '0';
int ones2 = '0';
for (tens = '0'; tens <= '9'; tens++)/* prints tens digit*/
{
for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
{
for (tens2 = '0'; tens2 <= '9'; tens2++)/* prints tens digit*/
{
for (ones2 = '0'; ones2 <= '9'; ones2++)/* prints ones digit*/
{
if ((ones < ones2) && (tens <= tens2))
{
putchar(tens);
putchar(ones);
putchar(' ');
putchar(tens2);
putchar(ones2);
if (!(ones == '8' && tens == '9'))/*addes comma and space*/
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
