#include "main.h"
/**
*_isupper - check if a  character is uppercase or lowercase
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if it is lowercase
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
