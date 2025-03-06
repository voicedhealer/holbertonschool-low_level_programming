#include <stdio.h>

 /**
 * argc et argv
 * la condition compare argc 
 * printf pour afficher le nom
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return(0);
}
