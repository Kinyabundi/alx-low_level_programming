#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @: first int to swap
 * @: second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
