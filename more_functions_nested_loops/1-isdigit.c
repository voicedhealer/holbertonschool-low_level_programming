/**_isdigit -  vérifie si un caractère donné est un chiffre
* si cela est un chiffre int c
*
*retourne 1 si c'est un chiffre sinon 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

