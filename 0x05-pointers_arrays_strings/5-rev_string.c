#include "main.h"

/**
 * rev_string - Entry point
 * Description - A function that reverses a string
 * *@s: the function accepts an input saved into s
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{

int i;
int j = 0;
char word = s[0];

while (s[j] != '\0')
j++;

for (i = 0; i < j; i++)
{
j--;
word = s[i];
s[i] = s[j];
s[j] = word;
}

}
