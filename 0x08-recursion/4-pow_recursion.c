#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base value
 * @y: exponet value
 * Return: Always 0 (epitychia)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	y--;
	return (x * _pow_recursion(x, y));

}
