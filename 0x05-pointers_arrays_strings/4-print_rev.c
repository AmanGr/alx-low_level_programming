#include "main.h"

/**
 * print_rev - Entry point
 * Description - A function that prints a string, in reverse,
 * followed by a new line
 * *@s: the function accepts an input saved into s
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int i = 0;
int j = 0;
int length = 0;

while (s[i] != '\0')
{
length += 1;
i++;
}

for (j = length - 1; j >= 0; j--)
{
_putchar(s[j]);
}

_putchar('\n');
}
