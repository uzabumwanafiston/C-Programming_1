#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *positive_or_negative - Determines if a number is positive, negative, or zero.
 *
 * @n: The number to be checked.
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
