
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

	n = 'a';

			while (n <= 'z')
			{
				putchar(n);
				n++;

			}
			putchar('\n');
	return (0);
}
