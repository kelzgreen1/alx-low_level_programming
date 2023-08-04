#include"main.h"
/**
*_strcpy-copiesthestringpointedtobysrc
*,includingtheterminatingnullbyte(\0)
*,tothebufferpointedtobydest.
*@src:sourceofstringparameterinput
*@dest:destinationofstrin
*Return:pointertodestinputparameter
*/
char *_strcpy(char *dest, char *src)
{
	int p, q = 0;

	for (p = 0; src[p] != '\0'; ++p)
	{
		dest[q] = src[p];
		++q;
	}
	dest[q] = '\0';

	return (dest);
}
