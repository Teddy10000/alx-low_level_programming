
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

		

			for (n = '0'; n <= '8'; n++)
			{
				putchar(n);
				putchar(',');	

			}
			putchar('9');
			putchar('\n');
	return (0);
}
