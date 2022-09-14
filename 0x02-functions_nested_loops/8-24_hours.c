# include "main.h"
#include <unistd.h>



/**
 *  * jack_bauer - prints every minute of the day of Jack Bauer
 *
 *   * Return:void
 *
 */


void jack_bauer(void)

{
	int h_1;
	int h_2;
	int m_1;
	int m_2;
	int a = 9;

	h_2 = 0;
	while (h_2 <= 2)
	{
		if (h_2 == 2)

		{
			a = 3;

		}
		h_1 = 0;

		while (h_1 <= a)
			m_2 = 0;

			while (m_2 <= 5)

				{m_1 = 0;

					while (m_1 <= 9)
						{

							_putchar('0' + h_2);
							_putchar('0' + h_1);
							_putchar(':');
							_putchar('0' + m_2);
							_putchar('0' + m_1);
							_putchar('\n')
							m1++;
						} m_2++;
				}h_1++
	}h_2++;
}					
