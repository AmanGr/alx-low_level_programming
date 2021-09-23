#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: firts tring to concatenate
 * @s2: second string to concatenate
 * @n: is the limit to return
 * Return: the pointer 'ptr'
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0') /* recorrido de s1 */
	{
		i++;
	}
	while (*(s2 + j) != '\0')/* recorrido de s2 */
	{
		j++;
	}
	if (n < j)
	{
		j = n;
	}

	ptr = malloc(sizeof(char) * (i + j + 1)); /* We obtain the malloc. */

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i ; k++)
	{
		*(ptr + k) = *(s1 + k);
	}

	for (l = 0 ; l < j ; l++)
	{
		*(ptr + (k + l)) = *(s2 + l);
	}

	*(ptr + (k + l)) = '\0';
	return (ptr);
}
