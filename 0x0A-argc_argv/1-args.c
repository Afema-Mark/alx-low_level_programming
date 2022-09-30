#include <stdio.h>

/**
*main - This prints the number of arguments passed in to it
*@args:This is the count argument
*@argv:This is the vector of argument
*Return:0
*/
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
