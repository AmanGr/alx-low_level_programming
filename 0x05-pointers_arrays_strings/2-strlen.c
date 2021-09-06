#include "main.h"

/**
 * _strlen - Entry point
 * Description - A function that returns the length of a string
 * *@s: the function accepts an input saved into s
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int i = 0;
int length = 0;

while (s[i] != '\0')
{
length += 1;
i++;
}

return (length);

}
