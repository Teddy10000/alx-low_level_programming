# include "main.h"
# include <string.h>
/**
 * _strncpy -> for copying purpose
 * @dest: destination copied variable
 * @src: what to copy to the destination
 * @n: Third param
 * Return: returns a string
 *
 */


char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);
	return (dest);
}
