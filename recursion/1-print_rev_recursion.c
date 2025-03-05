#include "main.h"
/**
 *_rev_recursion - print a string
 *@s:string
 *return:void
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_rev_recursion(s - 1);
	}
	else
	{
	_putchar('\n');
	}
}
