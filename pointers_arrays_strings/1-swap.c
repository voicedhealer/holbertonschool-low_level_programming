/**
*creation d'une variable temporaire pour permuter les valeurs
*
*
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
