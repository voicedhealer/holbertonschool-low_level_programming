#include <stdlib.h>

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: Pointer to the function used to print the name
 *
 * Description: This function takes a name and 
 * a function pointer as arguments.
 * It applies the function passed 
 * in the argument `f` to the name `name`.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		f(name);
	}
}
