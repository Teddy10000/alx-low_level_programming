#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main -> This function prints the multiplication of the arguments passed
*@argc : takes in the number of command line argument.
*@argv: contains the string of the list command line argument
*  Return: 0
*
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);


		return (0);
	}
}

