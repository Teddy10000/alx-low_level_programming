#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main -> This function prints the command line argument of the name
*@argc : takes in the number of command line argument.
*@argv: contains the string of the list command line argument
*  Return: 0
*
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argv[0]);

	return (0);
}

