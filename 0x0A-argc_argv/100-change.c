#include <stdio.h>
#include <stdlib.h>
/**
* main - prints minimof money
* @argc: int
* @argv: array of strings
* Return: number of coins
*/
int main(int argc, char *argv[])
{
int cash;
int count;
count = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cash = atoi(argv[1]);
for (count = 0; cash > 0; count++)
{
if (cash >= 25)
cash = cash - 25;
else if (cash >= 10 && cash < 25)
cash = cash - 10;
else if (cash >= 5 && cash < 10)
cash = cash - 5;
else if (cash >= 2 && cash < 5)
cash = cash - 2;
else
cash = cash - 1;
}
printf("%d\n", count);
return (0);
}
