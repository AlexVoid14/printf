#include <unistd.h>
#include "main.h"
/*
 * _putchar:- 'A function to print to the std stream'
 * @c:- element
 * Return: Character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
