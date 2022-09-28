#include "main.h"

/**
  *_print_rev_recursion prints the reverse strings
  *@s: the string to be printed
  *Return:on success 1
  */
void _print_rev_recursion(char *s);
{
	if(*s != '\0')
	{
		_print_rev_recursion(s+1);
		putchar(*s);
	}
}
