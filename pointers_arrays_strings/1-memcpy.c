#include <stdio.h>
#include <string.h
#include "main.h"
/*
*copy of src in dest
*
*loops for copy byte
*return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	insigned int i;

	for (i = 0; i < n; i++);
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
