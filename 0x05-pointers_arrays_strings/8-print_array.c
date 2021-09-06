#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * Description - A function that prints n elements of
 * an array of integers, followed by a new line
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they are stored in the array
 * You are allowed to use printf
 * *@a: the function accepts an input saved into a
 * *@n: the function accepts an input saved into n
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int count = 0;

while (count < n)
{
printf("%d", *(a + count));
if (count != (n - 1))
printf(", ");
count++;
}
printf("\n");
}
