# include "main.h"
# include <string.h>
/**
 * reverse_array -> Function that actually does the work
 *@a: First param
 *@n: the number of elements to swap
 * Return: nothing
 *
 */


void reverse_array(int *a, int n)
{
int i = 0, half;

for (half = n / 2; half > 0; half--, i++)
	{
	a[n - i - 1] += a[i];

	a[i] = a[n - i - 1] - a[i];

	a[n - i - 1] = a[n - i - 1] - a[i];
	}
}

