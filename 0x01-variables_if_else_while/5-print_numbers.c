
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

	int n;

	srand(time(0));

	n = '0';

			while (n <= '9')
			{
				putchar(n);
				n++;

			}
			putchar('\n');
	return (0);
}