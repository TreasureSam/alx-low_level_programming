#include "main.h"
#include <stdio.h>

/* *
 * _isdigit - checks if a character is digit
 *  * @c: carrier variable
 *   * Return: 1 if true, 0 if false
 *   
 * */
int _isdigit(int c)
{
 c = '0';
 printf("%c: %d\n", c, _isdigit(c));
 c = 'a';
 printf("%c: %d\n", c, _isdigit(c));
 return (0);
}
