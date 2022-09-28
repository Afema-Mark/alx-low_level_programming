#include "main.h"

/**
<<<<<<< HEAD
  * _puts_recursion - Prints a string followed by a new line
  * @s: string
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  *
  void _puts_recursion(char *s)
  {
  	if (*s == 0)
=======
 * _puts_recursion - prints a string followed by a new line
 * @s: string 
 *
 * Return: 0 on success 1.
 * On error, -1 is returned,errno is set approprietly
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
>>>>>>> f38ee9655b6474189d437746d7eb5a2d6b3549aa
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
<<<<<<< HEAD
  }
=======
}
>>>>>>> f38ee9655b6474189d437746d7eb5a2d6b3549aa
