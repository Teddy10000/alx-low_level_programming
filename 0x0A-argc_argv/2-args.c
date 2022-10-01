#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main -> This function prints the number of command line argument passed
*@argc : takes in the number of command line argument.
*@argv: contains the string of the list command line argument
*  Return: 0
*
*/

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	

	return (0);
}

