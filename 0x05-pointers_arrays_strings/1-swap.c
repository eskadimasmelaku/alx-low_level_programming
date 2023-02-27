#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: the first integer to be swaped
 * @b: the second ineger to be swaped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
