
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

	int n, s;

	srand(time(0));



		for (s = '0'; s <= '9'; s++)
		{
			putchar(s);
		}

		for (n = 'a'; n <= 'f'; n++)
		{
			putchar(n);

		}
			putchar('\n');
		return (0);
}
