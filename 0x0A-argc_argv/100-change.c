#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
int total, count;
unsigned int i;
char *p;
int coins[] = {25, 10, 5, 2};
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = strtol(argv[1], &p, 10);
count = 0;
if (!*p)
{
while (total > 1)
{
for (i = 0; i < sizeof(coins[i]); i++)
{
if (total >= coins[i])
{
count += total / coins[i];
total = total % coins[i];
}
}
}
if (total == 1)
count++;
}
else
{
printf("Error\n");
return (1);
}
printf("/%d\n", count);
return (0);
}
