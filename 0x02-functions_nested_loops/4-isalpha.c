include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: a character argument
 * return: returns 0 and 1 depending on conditions 
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
