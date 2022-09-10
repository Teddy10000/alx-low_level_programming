
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



			for (n = 'a'; n <= 'z'; n++)
			{
				if (n != 'e' &&  n != 'q')
				{
					putchar(n);
				}

			}
			putchar('\n');
	return (0);
}
