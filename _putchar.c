#include "main.h"
#include <unistd.h>

/**
 * _putchar- Entry Point
 *
 * Description:- 'Function to print character'
 * @c:- character element
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
