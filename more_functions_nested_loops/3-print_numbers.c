#include "main.h"
#include <stdio.h>

/**
*
*
*
*/
void print_numbers(void)

{
	char number;

	for (number = '0'; number <= '9';number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}

int main(void)
{	
	print_numbers();
	return(0);
}
