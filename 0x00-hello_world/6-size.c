/*
 *This program prints the size of char, int, long int, long long int and float
 * in the computer it is run on
 */

#include <stdio.h>

/**
 * main - using Size of a (data type) to print their sizes.
 *
 * Return: still = 0 bcause of void
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
