#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 * Description - A function that swaps the values of two integers
 * *@a: the function accepts an input saved into a
 * *@b: the function accepts an input saved into b
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{

int c;

c = *b;
*b = *a;
*a = c;

}
