#include <stdio.h>

/**
  *main - write aprogram that prints its name,it ends with a new line
  *@argc: this is the argument count
  *@argv: this is the argument vector
  *Return - This return 0
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
