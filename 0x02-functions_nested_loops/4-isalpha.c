#include "main.h"
/**
* _isalpha - Checks if c is a letter
* @c : char to check
*
* Description: Checks if c is lowercase or uppercase letter
* Return: returns 1 if lower or upper case, returns 0 otherwise
*/

int _isalpha(int c)
{
	if (c > 65 && c <= 90)
	{
		return (1);
	}
	else if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
