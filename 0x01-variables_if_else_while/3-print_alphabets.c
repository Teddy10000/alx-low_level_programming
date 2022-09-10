
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 *  * main - Entry point
 *
 *
 *
 *    * Return: Always 0 (Success)
 *
 *
 */


int main(void)

{

	int n, k;

	srand(time(0));

	n = 'a';
	k = 'A';

			while (n <= 'z')
			{
				putchar(n);
				n++;

			}
			while (k <= 'Z')
			{
				putchar(k);
				k++;
			}
			putchar('\n');
	return (0);
}
