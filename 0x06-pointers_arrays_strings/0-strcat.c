# include "main.h"
# include <string.h>

/**
 *_strcat -> this is a function strcat
 * @dest: first param
 * @src: second param
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, i;

	while (dest[index])
		index++;

	for (i = 0; src[i] != 0; i++)
		{
		dest[index] = src[i];
		index += 1;
		}
	dest[index] = '\0';
	return (dest);


}
