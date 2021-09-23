#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 *
 * Return: a pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int cs1 = 0;
	unsigned int cs2 = 0;
	unsigned int i;

	if (s1 != NULL)
	{
		for (; s1[cs1]; cs1++)
			;
	}
	if (s2 != NULL)
	{
		for (; s2[cs2]; cs2++)
			;
	}
	if (cs2 > n)
		cs2 = n;

	s = malloc(sizeof(char) * (cs1 + cs2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < cs1; i++)
		s[i] = s1[i];
	for (i = 0; i < cs2; i++)
		s[cs1 + i] = s2[i];

	s[cs1 + cs2] = '\0';
	return (s);
}
