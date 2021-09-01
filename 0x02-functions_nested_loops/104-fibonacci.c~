#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int last_digit;
	unsigned long int y1, y2, x1, l, x2;

	y1 = 2;
	x1 = 1;
	printf("1, 2, ");
	for (i = 2; i < 98; i += 1)
	{
		if (i > 90)
		{
			if (i == 91)
			{
				y1 = y1 / 100;
				x1 = x1 / 100;
			}


				y2 = y1 % 100;
				x2 = 1;
			if (y2 + x2 >= 10000)
			{
				y1 += 1;
			}
			else
				last_digit = y2 + x2;
		}
		l = y1;
		y1 += x1;
		printf("%lu,", y1);
		if (last_digit > 0 && last_digit < 100)
			printf("%i", last_digit);
		printf(" ");
		x1 = l;
	}
	printf("\n");
	return (0);
}
