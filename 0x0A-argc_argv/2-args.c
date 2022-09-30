#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints all the arguments a program recieves
  *@argc: this is argument count
  *@argv: This is argument vector
  *Return:0
  */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
