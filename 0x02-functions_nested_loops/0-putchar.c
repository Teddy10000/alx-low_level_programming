#include "main.h"
#include <unistd.h>
/**
 *  * main - Entry point
 *
 *   * Return:0
 *
 *
  */

int main(void)

{

	char d[9] = "_putchar";

	int i = 0;

	while (i < 8)

	{

		_putchar(d[i]);

		i++;

	}

	_putchar('\n');

	return (0);

}
