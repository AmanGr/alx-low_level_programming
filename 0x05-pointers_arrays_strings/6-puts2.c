#include "main.h"

/**
 * puts2 - Entry point
 * Description - A function that prints every other character
 * of a string, starting with the first character,
 * followed by a new line
 * *@str: the function accepts an input saved into str
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;

}
_putchar('\n');
}
